//test non existing constructor
class Person{
    int age;
    int wage;
    int experience;

    Person (int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }
}

int main() {
    Person p = new Person();

}
