//test bad, duplicate function declarations in class
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

    int calculateBonus(int a, int b){
        return wage;
    }

    int calculateBonus(int x, int y){
        return wage;
    }


}

int main() {
    Person p1 = new Person(1000, 22, 1);
}