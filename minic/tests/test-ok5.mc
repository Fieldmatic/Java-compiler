//test ok function calls of object p1, setting value of local parameter with attribute value from function call
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

    int getWage(){
        return wage;
    }

    int getAge(){
        return age;
    }

    int getExperience(){
        return experience;
    }


}

int main() {
    int age;
    int wage;
    int experience;
    Person p1 = new Person(1000, 22, 1);
    age = p1.getAge();
    wage = p1.getWage();
    experience = p1.getExperience();
}