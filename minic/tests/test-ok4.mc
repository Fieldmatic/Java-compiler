// test ok after creating two instances of objects of same type, changing attribute age of p to age of p1 and experience of p1 to experience of p
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

    Person p = new Person();
    p.age = 30;
    p.wage = 2000;
    p.experience = 10;

    p.age = p1.age;
    p1.experience = p.experience;


}
