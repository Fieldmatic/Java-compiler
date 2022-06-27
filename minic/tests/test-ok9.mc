
//test ok setting value of car.speed to person.wage

interface Employee {
    int calculateVacationDays(int experience);
    int calculateDaysTillRetirement(int age);
}

class Car {
    int speed;

    Car(int speed) {
        speed = speed;
    }

    Car(){}
}

class Person implements Employee{
    int age;
    int wage;
    int experience;
    Car car = new Car(120);

    Person() {}

    Person (int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }

    int calculateVacationDays(int experience){
        int days;
        days = experience + 25;
        return days;
    }
    int calculateDaysTillRetirement(int age){
        return 60-age;
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
    Person p1 = new Person(1000, 22, 1);
    Car car = new Car();
    car.speed = p1.getWage();
}