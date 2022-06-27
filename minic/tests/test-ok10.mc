//test ok calling implemented interface methods from main

interface Employee {
    int calculateVacationDays();
    int calculateYearsTillRetirement();
}
class Person implements Employee{
    int age;
    int wage;
    int experience;

    Person() {}

    Person (int age, int wage, int experience){
        age = age;
        wage = wage;
        experience = experience;
    }

    int calculateVacationDays(){
        int days;
        days = experience + 25;
        return days;
    }
    int calculateYearsTillRetirement(){
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
    Person p = new Person();
    Person p1 = new Person(32, 2000,11);
    p.wage = p1.wage;
    p.age = p1.getAge();
}