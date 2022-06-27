//test ok instancing with empty constructor and assigning value to attributes
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

int main() {
    Person p = new Person();
    p.age = 30;
    p.wage = 2000;
    p.experience = 10;

}