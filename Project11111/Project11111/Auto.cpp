#include "Auto.h"


Auto::Auto(int pred, bool zyc, int czas, int rodzajj, int widocznoscc, int odwagaa, int zdenerwowaniee, int gdziee, int skadd)
{
	predkosc = pred;
	zycie = zyc;
	czas_zycia = czas;
	przeszkoda = false;
	rodzaj = rodzajj;
	widocznosc = widocznoscc;
	odwaga = odwagaa;
	zdenerwowanie = zdenerwowaniee;
	gdzie = gdziee;
	skad = skadd;
}

Auto::Auto()
{

	predkosc = 1;

	zycie = false;
	czas_zycia = 0;
	przeszkoda = false;

}
