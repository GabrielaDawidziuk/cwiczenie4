#include <iostream>
#include "AnalizatorSygnalu.h"
#include "Sygnal.h"
#include "Probka.h"
#include "SygnalLoader.h"

using namespace std;

int main()
{
    SygnalLoader sl;
    AnalizatorSygnalu as;
    Sygnal s;
    Probka p = Probka(10,20);
    s.dodajProbke(p);
    Probka p2 = Probka(20,30);
    s.dodajProbke(p2);
    cout<< "IloscProbek: " << s.iloscProbek() <<endl;
    cout<< "maksimum: "<<as.maksimum(s)<<endl;
    cout<< "minimum: "<< as.minimum(s)<<endl;
    cout<< "srednia: "<<as.srednia(s)<<endl;
    cout<< "dlugosc: "<<as.dlugosc(s)<<endl;
    cout<< "calka: "<<as.calka(s)<<endl;
}
