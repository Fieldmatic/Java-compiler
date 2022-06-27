// test duplicate constructor with same param types and same param number
class Person{
    int age;
    int wage;
    int experience;

    Person() {}

    Person (int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }

    Person (int a, int b, int c){
        age = a;
        wage = b;
        experience = c;
    }

}

int main() {}