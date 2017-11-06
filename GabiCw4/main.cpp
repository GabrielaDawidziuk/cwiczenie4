#include "AnalizatorSygnalu.h"
#include "SygnalProbkowany.h"
#include "Probka.h"
#include "SygnalLoader.h"
#include <iostream>
using namespace std;
int main()
{
	string ZnazwaPliku, OnazwaPliku;
	cout << "Podaj nazwe pliku odczytu: "; cin >> OnazwaPliku;
	cout << "Podaj nazwe pliku zapisu: "; cin >> ZnazwaPliku;
	SygnalLoader sl;
	AnalizatorSygnalu as;
	SygnalProbkowany s = sl.wczytajSygnalProbkowany( OnazwaPliku );
	cout << "iloscProbek: " << s.iloscProbek() << endl;
	cout << "maksimum: " << as.maksimum( s ) << endl;
	cout << "minimum: " << as.minimum( s ) << endl;
	cout << "srednia: " << as.srednia( s ) << endl;
	cout << "dlugosc: " << as.dlugosc( s ) << endl;
	cout << "calka: " << as.calka( s ) << endl;
	sl.zapiszSygnalProbkowany( s, ZnazwaPliku );
	return 0;
}
