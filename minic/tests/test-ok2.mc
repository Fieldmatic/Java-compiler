//test ok new object with parametrized constructor
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
    int age;
    int wage;
    int experience;
    age = 22;
    wage = 1000;
    experience = 1;

    Person p1 = new Person(age, wage, experience);

}