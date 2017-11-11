#pragma once
#include <iostream>
#include <string.h>
ref class Auto
{
public:

	Auto(int pred, bool zyc,int czas, int rodzajj, int gdziee);
	Auto();


	bool zycie;
	int czas_zycia;
	int predkosc;
	int widocznosc = 2;// jaka odleg³oœ potrzebna do zmiany pasa
	int odwaga = 1;	//ilosc miejsca zeby zmienic pas
	int rodzaj;	//kolor auta
	int gdzie;	//okresla któr¹ drog¹ ma jechaæ 
	
	bool przeszkoda;

};

