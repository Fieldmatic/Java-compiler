//test bad constructor parameters
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
    ug = 5u;
    Person p = new Person();
    Person p1 = new Person(22, ug, 1);

}
