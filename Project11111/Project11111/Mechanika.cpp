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
		if (Droga1[i]->zycie == true) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
				if (i + j < 13) {
					if (Droga1[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga1[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			if (Droga1[i]->predkosc < wolne_miejsca) Droga1[i]->predkosc++;
			if (Droga1[i]->predkosc >= wolne_miejsca) Droga1[i]->predkosc = wolne_miejsca;
		}
	}

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true) {
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
		}
	}

}

void Mechanika::Zdarzenia_Losowe()
{
	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga1[i]->zycie == true) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga1[i]->predkosc--;
				if (a == 1 || a==2 || a==3 || a==4 || a==5) Droga1[i]->predkosc = 0;
				if (Droga1[i]->predkosc <= 0)Droga1[i]->predkosc = 0;
			}
		}
	}

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true) {
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
		if (Droga1[i]->zycie == true) {
			if (Droga1[i]->czas_zycia >= 1) {
				if (i + Droga1[i]->predkosc < 13) {
					Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i];
				}
				else {
					Drogatemp1[i]->zycie = false;

				}
			}
			else {
				Drogatemp1[i] = Droga1[i];
			}
			Droga1[i]->czas_zycia++;
		}
	}
	Droga1 = Drogatemp1;

	for (int i = 0; i < dlugoscdrogi1_2; i++) {
		if (Droga2[i]->zycie == true) {
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
