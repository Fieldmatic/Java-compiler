//test redefinition of method in interface

interface Employee {
    int calculateVacationDays(int experience);
    int calculateDaysTillRetirement(int age);
    int calculateDaysTillRetirement();
}

int main(){

}