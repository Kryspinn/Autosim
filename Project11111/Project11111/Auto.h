#pragma once
#include <iostream>
#include <string.h>
ref class Auto
{
public:

	Auto(int pred, bool zyc, int czas, int rodzajj, int widocznoscc, int odwagaa, int zdenerwowaniee, int gdziee, int skadd);
	Auto();


	bool zycie;
	int czas_zycia;
	int predkosc;  //predko�c auta
	int widocznosc = 4; // ilosc p�l z kt�rej wida� przeszkode
	int odwaga = 2;	//ilosc miejsca zeby zmienic pas
	int zdenerwowanie; //czas potrzebny do zmniejszenia odwagi
	int rodzaj; // kolor auta
	int gdzie; //numer drogi zjazdowej
	int skad;
	bool przeszkoda; // czy dana kom�rka jest przeszkod�

};
