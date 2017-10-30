#ifndef _SygnalLoader_h_
#define _SygnalLoader_h_
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

#include "Sygnal.h"

class Sygnal;
class Probka;
class SygnalLoader;

class SygnalLoader
{

	public:

	SygnalLoader() {}

	Sygnal wczytajSygnal(string _nazwaPliku)
	{
		/*typedef vector <Probka> Probki;
		ifstream plik;
		plik.open(_nazwaPliku.c_str(), ios::in);
		string linia;
		while (getline (plik, linia))
		{
			stringstream ss (linia);
			double liczba1, liczba2;
			ss >> liczba1;
			ss.ignore();
			ss >> liczba2;
			Probka nowa_probka = Probka(10,21);
			Sygnal x;
			x.dodajProbke(nowa_probka);
		}
		plik.close();*/
	}

	void zapiszSygnal(Sygnal& aSygnal, std:: string aNazwaPliku);
};

#endif
