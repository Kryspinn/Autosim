#include "Mechanika.h"
#include "Auto.h"
#include <time.h>
#define DLUGOSCDROGI1_2 13
using namespace System;


Mechanika::Mechanika()
{
	rnd = gcnew Random();
	array< Auto^ >^ local1 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ local2 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ local3 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ local4 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);

	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		local1[i] = gcnew Auto;
		local2[i] = gcnew Auto;
		local3[i] = gcnew Auto;
		local4[i] = gcnew Auto;
	}
	Droga1 = local1;
	Droga2 = local2;
	Droga3 = local3;
	Droga4 = local4;
}

void Mechanika::Przyspieszani_Hamowanie()
{
	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI1_2) {
					if (Droga1[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga1[i]->predkosc + 100;//wyjscie z pêtli
				}
				else wolne_miejsca = 10;
			}
			if (Droga1[i]->predkosc < wolne_miejsca) Droga1[i]->predkosc++;
			if (Droga1[i]->predkosc >= wolne_miejsca) Droga1[i]->predkosc = wolne_miejsca;
			if (Droga1[i]->predkosc >= 2) Droga1[i]->predkosc = 2;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga2[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI1_2) {
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
	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga1[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5) Droga1[i]->predkosc = 0;
				if (Droga1[i]->predkosc <= 0)Droga1[i]->predkosc = 0;
			}
		}
	}

	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
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
	array< Auto^ >^ localtemp1 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ localtemp2 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ localtemp3 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);
	array< Auto^ >^ localtemp4 = gcnew array< Auto^ >(DLUGOSCDROGI1_2);



	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		localtemp1[i] = gcnew Auto;
		localtemp2[i] = gcnew Auto;
		localtemp3[i] = gcnew Auto;
		localtemp4[i] = gcnew Auto;
	}


	array< Auto^ >^ Drogatemp1 = localtemp1;
	array< Auto^ >^ Drogatemp2 = localtemp2;
	array< Auto^ >^ Drogatemp3 = localtemp3;
	array< Auto^ >^ Drogatemp4 = localtemp4;





	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga1[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga1[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga1[i]->gdzie == 2) {
					if (i + Droga1[i]->predkosc < DLUGOSCDROGI1_2) { //czy wyjedzie poza tablice
						Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i]; //ustawinie nowego miejsca
					}
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga1[i]->predkosc - DLUGOSCDROGI1_2; j++) {
							if (Droga4[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1_2 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp4[Droga1[i]->predkosc + i - DLUGOSCDROGI1_2] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
							Droga1[i]->zycie = false;
							Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1_2 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp4[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
							Droga1[i]->zycie = false;
							Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp1[i] = Droga1[i];
						}





					}
				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI1_2) {
							if (Droga1[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga1[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI1_2 - 1) {
						Droga1[i]->predkosc = wolne_miejsca;
					}
					Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i];
				}
			}
			else Drogatemp1[i] = Droga1[i];   //postuj dla 1sekundy
			Droga1[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}






	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			if (Droga2[i]->czas_zycia >= 1) {
				if (i + Droga2[i]->predkosc < DLUGOSCDROGI1_2) {
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



	Droga1 = Drogatemp1;
	Droga2 = Drogatemp2;
	Droga3 = Drogatemp3;
	Droga4 = Drogatemp4;
}

void Mechanika::Zmiana_Pasa()
{

	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			int odleglosc_przeszkody = 0;
			bool jest_przeszkoda = false;
			for (int j = 1; j + i < DLUGOSCDROGI1_2; j++) {
				if (Droga1[j + i]->przeszkoda == false) {
					odleglosc_przeszkody++;
				}
				else {
					j = 100;//wyjscie z pêtli
					jest_przeszkoda = true;
				}
			}
			if (Droga1[i]->widocznosc >= odleglosc_przeszkody && jest_przeszkoda == true) {
				//widaæ przeszkode
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga2[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga1[i + 1]->zycie == false || (Droga1[i + 1]->zycie == true && Droga1[i + 1]->przeszkoda == true)) {
					if (Droga1[i]->odwaga < wolne_mijsce_zmiana) {
						Droga2[i] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
						Droga1[i]->zycie = false;
					}
					else Droga1[i]->predkosc = odleglosc_przeszkody;
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
			Droga1[0]->rodzaj = rnd->Next(1, 4);
			Droga1[0]->gdzie = 2;//popraw dla innych
		}
	}

	if (Droga2[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga2[0]->zycie = true;
			Droga2[0]->czas_zycia = 0;
			Droga2[0]->predkosc = rnd->Next(1, 3);
			Droga2[0]->rodzaj = rnd->Next(1, 5);
		}
	}
}

void Mechanika::Wybor_Pasa()
{
	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga1[i]->gdzie == 3 || Droga1[i]->gdzie == 4 || Droga1[i]->gdzie == 1) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga2[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga1[i]->odwaga < wolne_mijsce_zmiana) {
					Droga2[i] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
					Droga1[i]->zycie = false; // zmiana pasa
				}
			}
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

array<Auto^>^ Mechanika::DajDroge3()
{
	return Droga3;
}

array<Auto^>^ Mechanika::DajDroge4()
{
	return Droga4;
}

void Mechanika::Ustawwaruki(int natezeniee, int losowoscc)
{
	natezenie = natezeniee;
	losowosc = losowoscc;
}