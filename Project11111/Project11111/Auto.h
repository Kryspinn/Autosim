#pragma once
#include <iostream>
#include <string.h>
ref class Auto
{
public:

	Auto(int pred, bool zyc,int czas, int rodzajj, int widocznoscc, int odwagaa, int zdenerwowaniee, int gdziee);
	Auto();


	bool zycie;
	int czas_zycia; 
	int predkosc;  //predko�c auta
	int widocznosc = 4; // ilosc p�l z kt�rej wida� przeszkode
	int odwaga = 1;	//ilosc miejsca zeby zmienic pas
	int zdenerwowanie; //czas potrzebny do zmniejszenia odwagi
	int rodzaj; // kolor auta
	int gdzie = 3; //numer drogi zjazdowej
	
	bool przeszkoda; // czy dana kom�rka jest przeszkod�

};

