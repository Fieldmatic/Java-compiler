//test bad, incompatibile types for class method call
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
    unsigned z;
    Person p1 = new Person(1000, 22, 1);
    z = p1.getWage();
}