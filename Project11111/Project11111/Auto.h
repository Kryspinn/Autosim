#pragma once
#include <iostream>
#include <string.h>
ref class Auto
{
public:

	Auto(int pred, bool zyc,int czas);
	Auto();


	bool zycie;
	int czas_zycia;
	int predkosc;
	int widocznosc = 2;
	int odwaga = 2;	//ilosc miejsca zeby zmienic pas
	
	
	bool przeszkoda;

};

