#ifndef _Sygnal_h_
#define _Sygnal_h_
#include <iostream>
#include <vector>

using namespace std;

#include "Probka.h"

class Probka;
class Sygnal;

class Sygnal
{
    friend class AnalizatorSygnalu;
    friend class SygnalLoader;
    private:
    vector<Probka> probki;

    public:
    Sygnal () {}
    void dodajProbke(const Probka& _p)
    {
        probki.push_back(_p);
    }
    int iloscProbek()
    {
        return probki.size();
    }
Probka& operator[](int i);

    friend std::ostream& operator<<(std::ostream& aStream, const Sygnal& aSygnal);

};

#endif //_Sygnal_h_
