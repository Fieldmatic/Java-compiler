//test duplicate class error
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
}

class Person{
    int x;

    Person() {}
}


int main() {
    Person p = new Person();
    Person p1 = new Person(22, 1000, 1);

}