
interface testInterface {
    int dodaj(int x, int z, int f);
    int oduzmi (int y, int x, int f);
}


class fkfk{
    fkfk(){}
}

class osoba {
    osoba(){}
    fkfk f = new fkfk();
    int l;
    int z;
}

class Person implements testInterface {
    int a;
    int b;
    osoba osobica = new osoba();
    fkfk fk = new fkfk();

    Person(){}

    Person(int a, int f) {
        a=a;
        b=f;
    }

    int dodaj (int x, int z, int f) {

    }

    int oduzmi(int x, int y, int f) {

    }


    int funkcija(int x, int y, int f){
        int a;
        int b;
        y=5;
        return 5;
    }
    unsigned z;
    int testic(){
        int a;
        int b;
        int y;
        y=5;
        return y;
    }


}

int probaj(){
    return 1;
}

int main() {
    int o;
    int z;
    unsigned f;
    o=5;
    z=3;
    f=5u;
    Person p = new Person();
    Person x = new Person (5,4);
    osoba osoba = new osoba();
    osoba = x.osobica;
    o = x.funkcija(1,2,0);

}
