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
	int widocznosc = 2;// jaka odleg�o� potrzebna do zmiany pasa
	int odwaga = 1;	//ilosc miejsca zeby zmienic pas
	int rodzaj;	//kolor auta
	int gdzie;	//okresla kt�r� drog� ma jecha� 
	
	bool przeszkoda;

};

