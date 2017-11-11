#include "Auto.h"


Auto::Auto(int pred, bool zyc, int czas, int rodzajj, int gdziee)
{
	predkosc = pred;
	zycie = zyc;
	czas_zycia = czas;
	przeszkoda = false;
	rodzaj = rodzajj;
	gdzie = gdziee;
}

Auto::Auto()
{

	predkosc = 1;
	
	zycie = false;
	czas_zycia = 0;
	przeszkoda = false;

}



