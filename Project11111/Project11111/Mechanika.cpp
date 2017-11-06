#include "Mechanika.h"
#include "Auto.h"
#include <time.h>
#define dlugoscdrogi1_2 13
using namespace System;


Mechanika::Mechanika()
{
	rnd = gcnew Random();
	array< Auto^ >^ local1 = gcnew array< Auto^ >(dlugoscdrogi1_2);
	array< Auto^ >^ local2 = gcnew array< Auto^ >(dlugoscdrogi1_2);

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		local1[i] = gcnew Auto;
		local2[i] = gcnew Auto;
	}
	Droga1 = local1;
	Droga2 = local2;
}

void Mechanika::Przyspieszani_Hamowanie()
{
	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
				if (i + j < 13) {
					if (Droga1[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga1[i]->predkosc + 100;//wyjscie z p�tli
				}
				else wolne_miejsca = 10;
			}
			if (Droga1[i]->predkosc < wolne_miejsca) Droga1[i]->predkosc++;
			if (Droga1[i]->predkosc >= wolne_miejsca) Droga1[i]->predkosc = wolne_miejsca;
			if (Droga1[i]->predkosc >=2) Droga1[i]->predkosc=2;
		}
	}

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga2[i]->predkosc + 1; j++) {
				if (i + j < 13) {
					if (Droga2[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga2[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			if (Droga2[i]->predkosc < wolne_miejsca) Droga2[i]->predkosc++;
			if (Droga2[i]->predkosc >= wolne_miejsca) Droga2[i]->predkosc = wolne_miejsca;
			if (Droga2[i]->predkosc >= 2) Droga2[i]->predkosc = 2;
		}
	}

}

void Mechanika::Zdarzenia_Losowe()
{
	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga1[i]->predkosc--;
				if (a == 1 || a==2 || a==3 || a==4 || a==5) Droga1[i]->predkosc = 0;
				if (Droga1[i]->predkosc <= 0)Droga1[i]->predkosc = 0;
			}
		}
	}

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga2[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5) Droga2[i]->predkosc = 0;
				if (Droga2[i]->predkosc <= 0)Droga2[i]->predkosc = 0;
			}
		}
	}
}

void Mechanika::Przemieszczenie()
{
	array< Auto^ >^ localtemp1 = gcnew array< Auto^ >(dlugoscdrogi1_2);
	array< Auto^ >^ localtemp2 = gcnew array< Auto^ >(dlugoscdrogi1_2);

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		localtemp1[i] = gcnew Auto;
		localtemp2[i] = gcnew Auto;
	}
	array< Auto^ >^ Drogatemp1 = localtemp1;
	array< Auto^ >^ Drogatemp2 = localtemp2;


	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga1[i]->zycie == true ) {			//sprawdzenie czy istnieje auto
			if (Droga1[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (i + Droga1[i]->predkosc < 13) { //czy wyjedzie poza tablice
					Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i]; //ustawinie nowego miejsca
				}
				else {
					Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika

				}
			}
			else {
				Drogatemp1[i] = Droga1[i];   //postuj dla 1sekundy
			}
			Droga1[i]->czas_zycia++;		//inkrementacja �ycia
		}
	}
	Droga1 = Drogatemp1;

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			if (Droga2[i]->czas_zycia >= 1) {
				if (i + Droga2[i]->predkosc < 13) {
					Drogatemp2[i + Droga2[i]->predkosc] = Droga2[i];
				}
				else {
					Drogatemp2[i]->zycie = false;

				}
			}
			else {
				Drogatemp2[i] = Droga2[i];
			}
			Droga2[i]->czas_zycia++;
		}
	}

	Droga2 = Drogatemp2;
}

void Mechanika::Zmiana_Pasa()
{
	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			int odleglosc_przeszkody = 0;
			for (int j = 1; j <= Droga1[i]->widocznosc; j++) {	//policzenie odleg�o�ci do przeszkody//zawsze widzimy 2 od przeszkody
				if (i + j < 13) {
					if (Droga1[j + i]->przeszkoda == false) {
						odleglosc_przeszkody++;
					}
					else j = 100;//wyjscie z p�tli
				}
				else odleglosc_przeszkody = 10;

				
			}
			if (Droga1[i]->widocznosc >= odleglosc_przeszkody) {
				//wida� przeszkode
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i-k >= 0 && Droga2[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga1[i]->odwaga < wolne_mijsce_zmiana) {
					Droga2[i] = gcnew Auto(Droga1[i]->predkosc-1, Droga1[i]->zycie, Droga1[i]->czas_zycia);//zmiana predko�ci pami����������������etaj
					Droga1[i]->zycie = false;
				}
				else Droga1[i]->predkosc = odleglosc_przeszkody;
			}
		}
	}
}

void Mechanika::Ustaw_Przeszkode()
{
	Droga1[10]->przeszkoda = true;
	Droga1[10]->zycie = true;
	Droga1[10]->predkosc = 0;
}

void Mechanika::Nowe_Auto()
{
	if (Droga1[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga1[0]->zycie = true;
			Droga1[0]->czas_zycia = 0;
			Droga1[0]->predkosc = rnd->Next(1, 3);
		}
	}

	if (Droga2[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga2[0]->zycie = true;
			Droga2[0]->czas_zycia = 0;
			Droga2[0]->predkosc = rnd->Next(1, 3);
		}
	}
}

array<Auto^>^ Mechanika::DajDroge1()
{
	return Droga1;
}

array<Auto^>^ Mechanika::DajDroge2()
{
	return Droga2;
}

void Mechanika::Przypisanie(Auto^ zapis, Auto^ odczyt)
{
	zapis = gcnew Auto(odczyt->predkosc, odczyt->zycie, odczyt->czas_zycia);
}
