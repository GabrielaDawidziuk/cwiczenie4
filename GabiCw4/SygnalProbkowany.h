#ifndef _SygnalProbkowany_h_
#define _SygnalProbkowany_h_
/*=========================*/
#include "Probka.h"
#include <iostream>
#include <vector>
using namespace std;
class SygnalProbkowany
{
private:
	vector <Probka> probki;
public:
	Sygnal() {}
	void dodajProbke ( const Probka& _p )
	{
		probki.push_back( _p );
	}
	int iloscProbek() const
	{
		return probki.size() - 2;
	}
    Probka& operator []( int i )
	{
		return probki[ i ];
	}
	const Probka& operator []( int i ) const
	{
		return probki[ i ];
	}
	friend ostream& operator << ( ostream& _stream, const SygnalProbkowany& _sygnal );
};
#endif
