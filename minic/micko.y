%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"
  #include "string.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int lab_num = -1;
  FILE *output;

  int class_idx = -1;
  int defining_class = 0;
  int interface_idx = -1;
  int defining_interface = 0;
  int attr_idx = -1;
  int constructor_idx = -1;
  int defining_constructor = 0;
  int argument_counter = 0;
  int obj_idx = -1;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _SEMICOLON
%token <i> _AROP
%token <i> _RELOP
%token _CLASS
%token _INTERFACE
%token _COMMA
%token _IMPLEMENTS
%token _NEW
%token _DOT

%type <i> num_exp exp literal
%type <i> function_call argument rel_exp if_part

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : program_architecture
    {  
      if(lookup_symbol("main", FUN) == NO_INDEX)
        err("undefined reference to 'main'");
    }
  ;

program_architecture
  : structure_list
  | program_architecture structure_list
  ;
  
structure_list
  : function
  | class
  | interface
  ;

interface
  : _INTERFACE _ID 
  {
    defining_interface = 1;
    if (lookup_symbol($2, INTR) == NO_INDEX) {
      interface_idx = insert_symbol($2, INTR, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of interface '%s'", $2);

  }
  
  _LBRACKET interface_items _RBRACKET {defining_interface = 0;}
  ;

interface_items
  :
  | interface_items interface_function
  ;

class
  :
  _CLASS _ID 
  {
    defining_class = 1;
    if (lookup_symbol($2, CLASS) == NO_INDEX) {
      class_idx = insert_symbol($2, CLASS, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of class '%s'", $2);

  }
  _LBRACKET class_items _RBRACKET { defining_class = 0;}

  |  _CLASS _ID _IMPLEMENTS _ID
  {
    defining_class = 1;
    if (lookup_symbol($2, CLASS) == NO_INDEX) {
      class_idx = insert_symbol($2, CLASS, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of class '%s'", $2);
    if (lookup_symbol($4, INTR) == NO_INDEX) {
      err ("definition for interface '%s' doesn't exist", $4);
    }

  }
  _LBRACKET class_items _RBRACKET 
    { 
      int interfaceId = lookup_symbol($4, INTR);
      int *interface_function_indexes;
      interface_function_indexes = lookup_interface_functions(interfaceId);
      for (int i = 0; i < get_atr2(interfaceId); i++) {
        int response = function_exists_in_class(interface_function_indexes[i], class_idx);
        switch(response)
        {
          case -1:
                  err("parameter count of function '%s' in class '%s' isn't valid!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -2:
                  err("parameters of function '%s' aren't equal to parameters from implemented interface method in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -3:
                  err("return type of function '%s' isnt equal to return type from implemented interface method in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -4:
                  err("implementation of method '%s' not found in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          default:
                  break;
        }
      }
      defining_class = 0;}
  ;

class_items
  : 
  | class_items class_item
  ;

class_item
  : function
  | class_attribute
  | constructor
  ;

constructor
  : _ID _LPAREN {defining_constructor = 1;}
  {
    if (!defining_class) err("You cant define constructor outside of class!");
    char* className = get_name(class_idx);
    char* constructorName = $1;
    if (strcmp(className, constructorName) != 0) err("constructor name '%s' not valid for class '%s'",$1, get_name(class_idx));
    constructor_idx = insert_symbol($1, FUN, CONSTR, NO_ATR, NO_ATR, class_idx);
  } constructor_parameter_list
  {
    if (constructor_exists_in_class(constructor_idx, class_idx) == 1) {
      err("constructor '%s' with same parameters already exists in class '%s' !",$1, get_name(class_idx));
    }
    
  } _RPAREN body     {
                     defining_constructor = 0;}
  ;

constructor_parameter_list
  : /*empty */
  | constructor_parameter
  | constructor_parameter_list _COMMA constructor_parameter
  ;

constructor_parameter
  : _TYPE _ID
    {
        int parameter_idx = lookup_symbol($2, PAR);
        if (parameter_idx == NO_INDEX) insert_symbol($2, PAR, $1, 1, NO_ATR, constructor_idx);
        else {
          if (get_parent_index(parameter_idx) != constructor_idx) insert_symbol($2, PAR, $1, 1, NO_ATR, constructor_idx);
          else err("Redefinition of parameter '%s' in constructor '%s'", $2, get_name(constructor_idx));
        }
        set_atr1(constructor_idx, get_atr1(constructor_idx) + 1);
        set_atr2(constructor_idx, $1);
    }
  ;

class_attribute
  : _TYPE _ID {
    attr_idx = lookup_symbol($2, ATTR);
    if (attr_idx == NO_INDEX){
      attr_idx = insert_symbol($2,ATTR,$1,NO_ATR,NO_ATR,class_idx);
    }
    else {
       if (get_parent_index(attr_idx) == class_idx) err ("duplicate attribute '%s' in class '%s'", $2,get_name(class_idx));
       else attr_idx = insert_symbol($2,ATTR,$1,NO_ATR,NO_ATR,class_idx);
    }
  }_SEMICOLON
  | object_assignment_statement
  ;


interface_function
  : _TYPE _ID
  {     
        fun_idx = lookup_symbol($2, FUN);
        if(fun_idx == NO_INDEX){
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR, interface_idx);
          set_atr2(interface_idx, get_atr2(interface_idx) + 1);
        }
        else {
          if (get_parent_index(fun_idx) == interface_idx) err ("redefinition of function '%s' in interface '%s'", $2,get_name(interface_idx));
          else {
            fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR, interface_idx);
            set_atr2(interface_idx, get_atr2(interface_idx) + 1);
          }
        }
  }
   _LPAREN parameter_list _RPAREN _SEMICOLON
  ;
  
function
  : _TYPE _ID
      {
        if (defining_class == 1) 
        {
          fun_idx = lookup_symbol($2, FUN);
          if(fun_idx == NO_INDEX)
            fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR, class_idx);
          else {
            if (get_parent_index(fun_idx) == class_idx) {err ("redefinition of function '%s' in class '%s'", $2, get_name(class_idx));}
            else {fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR, class_idx);}
          }
        }
        else {
          fun_idx = lookup_symbol($2, FUN);
          if(fun_idx == NO_INDEX)
            fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR, NO_ATR);
          else 
            err("redefinition of function '%s'", $2);
        }

        code("\n%s:", $2);
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14");
      }
    _LPAREN parameter_list _RPAREN body
      {
        var_num = 0;
      }
  ;

parameter_list
  : /* empty */
      { set_atr1(fun_idx, 0); }
  | parameter

  | parameter_list _COMMA parameter
  ;

parameter
  : _TYPE _ID
      {
        int parameter_idx = lookup_symbol($2, PAR);
        if (parameter_idx == NO_INDEX) {
          insert_symbol($2, PAR, $1, 1, NO_ATR, fun_idx);
        }
        else {
          if (get_parent_index(parameter_idx) != fun_idx) insert_symbol($2, PAR, $1, 1, NO_ATR, fun_idx);
          else err("Redefinition of parameter '%s' in function '%s'", $2, get_name(fun_idx));
        }
        set_atr1(fun_idx, get_atr1(fun_idx) + 1);
        set_atr2(fun_idx, $1);
      }
  ;

body
  : _LBRACKET variable_list
      {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
        code("\n@%s_body:", get_name(fun_idx));
      }
    statement_list _RBRACKET
  ;

variable_list
  : /* empty */
  | variable_list variable
  ;

variable
  : _TYPE _ID _SEMICOLON
      {
        if (defining_constructor == 1) {
          int var_idx = lookup_symbol($2, VAR|PAR|OBJ);
          if(var_idx == NO_INDEX)
            insert_symbol($2, VAR, $1, ++var_num, NO_ATR, constructor_idx);
          else {
            if (get_parent_index(var_idx) != constructor_idx) insert_symbol($2, VAR, $1, ++var_num, NO_ATR, constructor_idx);
            else err("redefinition of '%s' in constructor '%s'", $2, get_name(constructor_idx));
          }
        }
        else{
          int var_idx = lookup_symbol($2, VAR|PAR|OBJ);
          if(var_idx == NO_INDEX)
            insert_symbol($2, VAR, $1, ++var_num, NO_ATR, fun_idx);
          else {
            if (get_parent_index(var_idx) != fun_idx) insert_symbol($2, VAR, $1, ++var_num, NO_ATR, fun_idx);
            else err("redefinition of '%s' in function '%s'", $2, get_name(fun_idx));
          }
        }
      }
  ;

statement_list
  : /* empty */
  | statement_list statement
  ;

statement
  : compound_statement
  | assignment_statement
  | if_statement
  | return_statement
  | object_assignment_statement
  ;

compound_statement
  : _LBRACKET statement_list _RBRACKET
  ;

object_assignment_statement
  : _ID _ID
  {
    argument_counter = 0;
    int desired_class_idx = lookup_symbol($1, CLASS);
    if (desired_class_idx == NO_INDEX) err ("Class with name '%s' isnt defined!", $1);
    else{
      int obj_idx = lookup_symbol($2, VAR|PAR|OBJ);
      if (defining_class == 1) {
        if(obj_idx == NO_INDEX)
          insert_symbol($2, OBJ, NO_TYPE, desired_class_idx, NO_ATR, class_idx);
        else {
          if (get_parent_index(obj_idx) != class_idx) insert_symbol($2, OBJ, NO_TYPE, desired_class_idx, NO_ATR, class_idx);
          else err("redefinition of '%s' in class '%s'", $2, get_name(class_idx));
        }
     }
      else{
        if(obj_idx == NO_INDEX)
            insert_symbol($2, OBJ, NO_TYPE, desired_class_idx, NO_ATR, fun_idx);
        else {
            if (get_parent_index(obj_idx) != fun_idx) insert_symbol($2, OBJ, NO_TYPE, desired_class_idx, NO_ATR, fun_idx);
            else err("redefinition of '%s' in function '%s'", $2, get_name(fun_idx));
        }
      }
    }
  }
   _ASSIGN _NEW _ID
   {
    int new_class_idx = lookup_symbol($6,CLASS);
    if (new_class_idx == NO_INDEX) err("Definition for class '%s' not found! ", $6);
    else if (get_name(new_class_idx) != get_name(lookup_symbol($1,CLASS))) err("You cant define object of type '%s' with class of type '%s'",get_name(lookup_symbol($1,CLASS)), get_name(new_class_idx));

   } 
   _LPAREN new_object_arguments
   {
    int new_class_idx = lookup_symbol($6,CLASS);
    if (find_valid_constructor(argument_counter,new_class_idx) == -1) err("No valid constructors found with same parameters!");
    else clear_symbols(get_last_element()-argument_counter+1);
   }
    _RPAREN _SEMICOLON {argument_counter = 0;}
  ;


assignment_statement
  : _ID _ASSIGN num_exp _SEMICOLON
      {
        if (defining_constructor == 1) {
          int idx = lookup_symbol($1, VAR|PAR|OBJ|ATTR);
          if (get_kind(idx) == ATTR && get_parent_index(idx) != class_idx) err("You cant assign value to a non member attribute '%s'! from class '%s'", get_name(idx), get_name(get_parent_index(idx)));
          if (idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", $1);
          else
            if(get_type(idx) != get_type($3))
              err("incompatible types in assignment");
          gen_mov($3, idx);
        }
        else {
          int idx = lookup_symbol($1, VAR|PAR|OBJ);
          if(idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", $1);
          else
            if (get_kind(idx) == OBJ) {
              if (get_atr1(idx) != get_atr1($3)) err("invalid assignment, '%s' and '%s' are not of same object type", get_name($3), get_name(idx));
            }
            else{
              if(get_type(idx) != get_type($3))
                err("incompatible types in assignment");
            }
          gen_mov($3, idx);
        }
      }
  | _ID _DOT
  {
    obj_idx = lookup_symbol_parent($1, OBJ,fun_idx);
    if (obj_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", $1);
  }_ID{
    attr_idx = lookup_symbol_parent($4, ATTR|OBJ, get_atr1(obj_idx));
    if (attr_idx == NO_INDEX) err ("Object of class '%s' doesn't have an attribute member '%s' ",get_name(get_atr1(obj_idx)), $4);
  }_ASSIGN num_exp
  {
    if (get_kind(attr_idx) == OBJ) {
      if (get_atr1($7) != get_atr1(attr_idx)) err("invalid assignment, '%s' and '%s' are not of same object type", get_name($7), get_name(attr_idx));
    }
    else{
      if (get_type($7) != get_type(attr_idx)) err("invalid operands, '%s' and '%s' are not of same type", get_name($7), get_name(attr_idx));
    }
  }_SEMICOLON
  ;

num_exp
  : exp

  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: arithmetic operation");
        int t1 = get_type($1);    
        code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name($1);
        code(",");
        gen_sym_name($3);
        code(",");
        free_if_reg($3);
        free_if_reg($1);
        $$ = take_reg();
        gen_sym_name($$);
        set_type($$, t1);
      }
  ;

exp
  : literal

  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR|OBJ);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | function_call
      {
        $$ = take_reg();
        gen_mov(FUN_REG, $$);
      }
  
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
  | _ID _DOT _ID
    {
    int object_idx = lookup_symbol_parent($1, OBJ,fun_idx);
    if (object_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", $1);
    $$ = lookup_symbol_parent($3, ATTR|OBJ, get_atr1(object_idx));
    if ($$ == NO_INDEX) err ("Object of class '%s' doesn't have an attribute member '%s' ",get_name(get_atr1(object_idx)), $3);

    }
  ;

literal
  : _INT_NUMBER
      { $$ = insert_literal($1, INT); }

  | _UINT_NUMBER
      { $$ = insert_literal($1, UINT); }
  ;

function_call
  : _ID 
      {
        fcall_idx = lookup_symbol($1, FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", $1);
      }
    _LPAREN argument _RPAREN
      {
        if(get_atr1(fcall_idx) != $4)
          err("wrong number of arguments");
        code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if($4 > 0)
          code("\n\t\t\tADDS\t%%15,$%d,%%15", $4 * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        $$ = FUN_REG;
      }
  | _ID _DOT _ID
  {
    obj_idx = lookup_symbol_parent($1, OBJ,fun_idx);
    if (obj_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", $1);
    fcall_idx = lookup_symbol_parent($3, FUN, get_atr1(obj_idx));
    if (fcall_idx == NO_INDEX) err ("Object of class '%s' doesn't have an method with name '%s' ",get_name(get_atr1(obj_idx)), $3);
  }
  _LPAREN new_object_arguments _RPAREN
  {
    if (call_valid(argument_counter,fcall_idx) == -1) err("Invalid arguments for function call '%s'!", get_name(fcall_idx));
    else clear_symbols(get_last_element()-argument_counter+1);
    set_type(FUN_REG, get_type(fcall_idx));
    $$ = FUN_REG;
  }
  ;

new_object_arguments
  :
  | new_object_argument
  | new_object_arguments _COMMA new_object_argument
  ;

new_object_argument
  : _ID {
    int var_idx = lookup_symbol_parent($1, VAR|PAR, fun_idx);
    if (var_idx == NO_INDEX) err("Argument '%s' not declared.", $1);
    else {
      insert_symbol($1, get_kind(var_idx), get_type(var_idx), NO_ATR, NO_ATR, fun_idx);
      argument_counter++;
    }
  }
  | _INT_NUMBER
    { insert_symbol($1, LIT, INT, NO_ATR, NO_ATR, fun_idx); 
      argument_counter++;}

  | _UINT_NUMBER
    { insert_symbol($1, LIT, UINT, NO_ATR, NO_ATR, fun_idx); 
      argument_counter++;}

  ;

argument
  : /* empty */
    { $$ = 0; }

  | num_exp
    { 
      if(get_atr2(fcall_idx) != get_type($1))
        err("incompatible type for argument");
      free_if_reg($1);
      code("\n\t\t\tPUSH\t");
      gen_sym_name($1);
      $$ = 1;
    }
  ;

if_statement
  : if_part %prec ONLY_IF
      { code("\n@exit%d:", $1); }

  | if_part _ELSE statement
      { code("\n@exit%d:", $1); }
  ;

if_part
  : _IF _LPAREN
      {
        $<i>$ = ++lab_num;
        code("\n@if%d:", lab_num);
      }
    rel_exp
      {
        code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3);
        code("\n@true%d:", $<i>3);
      }
    _RPAREN statement
      {
        code("\n\t\tJMP \t@exit%d", $<i>3);
        code("\n@false%d:", $<i>3);
        $$ = $<i>3;
      }
  ;

rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: relational operator");
        $$ = $2 + ((get_type($1) - 1) * RELOP_NUMBER);
        gen_cmp($1, $3);
      }
  ;

return_statement
  : _RETURN num_exp _SEMICOLON
      {
        if(get_type(fun_idx) != get_type($2))
          err("incompatible types in return");
        gen_mov($2, FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));        
      }
  ;

%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) {
    remove("output.asm");
    printf("\n%d error(s).\n", error_count);
  }

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}

