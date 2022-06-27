//test trying to instance class with object of different type

class Person{
    int age;
    int wage;
    int experience;

    Person(){}

    Person(int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }

}

class Objekat{
    int a;
    int b;
    Objekat () {}
}


int main() {
    Objekat o = new Person();

}