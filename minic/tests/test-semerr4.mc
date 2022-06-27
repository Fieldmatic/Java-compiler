// test incompatible types for variable and class attribute
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
    unsigned ug;
    Person p = new Person();
    Person p1 = new Person(22, 1000, 1);
    ug = p1.age;

}
