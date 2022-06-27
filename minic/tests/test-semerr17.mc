//test bad attribute member

class Person{
    int age;
    int wage;
    int experience;

    Person(int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }

}


int main() {
    int x;
    Person p = new Person(1,2,3);
    x = p.badparam;

}