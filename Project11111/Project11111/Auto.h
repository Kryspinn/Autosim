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
	int predkosc;  //predkoœc auta
	int widocznosc = 8; // ilosc pól z której widaæ przeszkode
	int odwaga = 2;	//ilosc miejsca zeby zmienic pas
	int zdenerwowanie = 2; //czas potrzebny do zmniejszenia odwagi
	int rodzaj; // kolor auta
	int gdzie; //numer drogi zjazdowej
	int skad;
	bool przeszkoda; // czy dana komórka jest przeszkod¹

};
