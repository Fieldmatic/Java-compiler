//test ok interface declaring and implementing it in class Person

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
    int age;
    int wage;
    int experience;
    Person p = new Person(1000, 22, 1);
    age = p.getAge();
    wage = p.getWage();
    experience = p.getExperience();
}