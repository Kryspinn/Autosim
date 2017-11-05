#pragma once
#include <iostream>
#include <string.h>
ref class Auto
{
public:
	Auto(int numerr, int predkoscc, int nrdrogii);
	Auto(int pred, bool zyc,int czas, int nrdrog, int nrpozy);
	Auto();
	~Auto();


	int predkosc;
	bool zycie;
	int czas_zycia;
	int nrdrogi;
	int nrpozycji;




	void Przemieszczenie();
	void Przyspieszanie();
	void Hamowanie();

};

