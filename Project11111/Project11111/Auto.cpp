#include "Auto.h"



Auto::Auto(int a, int v, int d)
{

	predkosc = v;
	nrdrogi = d;
	nrpozycji = 1;
	zycie = false;
	czas_zycia = 0;
}

Auto::Auto(int pred, bool zyc, int czas, int nrdrog, int nrpozy)
{
	predkosc = pred;
	zycie = zyc;
	czas_zycia = czas;
	nrdrogi = nrdrog;
	nrpozycji = nrpozy;
}

Auto::Auto()
{

	predkosc = 1;
	nrdrogi = 1;
	nrpozycji = 1;
	zycie = false;
	czas_zycia = 0;
}

Auto::~Auto()
{
	
}


void Auto::Przemieszczenie()
{
	
}

void Auto::Przyspieszanie()
{
	
}

void Auto::Hamowanie()
{
	
}

