#include "Mechanika.h"
#include "Auto.h"
#include <time.h>
#define DLUGOSCDROGI1 13
#define DLUGOSCDROGI2 13
#define DLUGOSCDROGI3 12
#define DLUGOSCDROGI4 24
#define DLUGOSCDROGI5 10
#define DLUGOSCDROGI6 5
#define DLUGOSCDROGI7 5
#define DLUGOSCDROGI8 6
#define DLUGOSCDROGI9 6
#define DLUGOSCDROGI10 13
#define DLUGOSCDROGI11 25
#define DLUGOSCDROGI12 13
#define DLUGOSCDROGI13 14
#define DLUGOSCDROGI14 14
#define DLUGOSCDROGI15 6
#define DLUGOSCDROGI16 6
#define DLUGOSCDROGI17 23
#define DLUGOSCDROGI18 36
#define DLUGOSCDROGI19 36


#define OGRANICZENIEPREDKOSCI 3;
using namespace System;


Mechanika::Mechanika()
{
	rnd = gcnew Random();
	array< Auto^ >^ local1 = gcnew array< Auto^ >(DLUGOSCDROGI1);
	array< Auto^ >^ local2 = gcnew array< Auto^ >(DLUGOSCDROGI2);
	array< Auto^ >^ local3 = gcnew array< Auto^ >(DLUGOSCDROGI3);
	array< Auto^ >^ local4 = gcnew array< Auto^ >(DLUGOSCDROGI4);
	array< Auto^ >^ local5 = gcnew array< Auto^ >(DLUGOSCDROGI5);
	array< Auto^ >^ local6 = gcnew array< Auto^ >(DLUGOSCDROGI6);
	array< Auto^ >^ local7 = gcnew array< Auto^ >(DLUGOSCDROGI7);
	array< Auto^ >^ local8 = gcnew array< Auto^ >(DLUGOSCDROGI8);
	array< Auto^ >^ local9 = gcnew array< Auto^ >(DLUGOSCDROGI9);
	array< Auto^ >^ local10 = gcnew array< Auto^ >(DLUGOSCDROGI10);
	array< Auto^ >^ local11 = gcnew array< Auto^ >(DLUGOSCDROGI11);
	array< Auto^ >^ local12 = gcnew array< Auto^ >(DLUGOSCDROGI12);
	array< Auto^ >^ local13 = gcnew array< Auto^ >(DLUGOSCDROGI13);
	array< Auto^ >^ local14 = gcnew array< Auto^ >(DLUGOSCDROGI14);
	array< Auto^ >^ local15 = gcnew array< Auto^ >(DLUGOSCDROGI15);
	array< Auto^ >^ local16 = gcnew array< Auto^ >(DLUGOSCDROGI16);
	array< Auto^ >^ local17 = gcnew array< Auto^ >(DLUGOSCDROGI17);
	array< Auto^ >^ local18 = gcnew array< Auto^ >(DLUGOSCDROGI18);
	array< Auto^ >^ local19 = gcnew array< Auto^ >(DLUGOSCDROGI19);
	
	
	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		local1[i] = gcnew Auto;
	}
	Droga1 = local1;

	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		local2[i] = gcnew Auto;
	}
	Droga2 = local2;

	for (int i = 0; i < DLUGOSCDROGI3; i++) {
		local3[i] = gcnew Auto;
	}
	Droga3 = local3;

	for (int i = 0; i < DLUGOSCDROGI4; i++) {
		local4[i] = gcnew Auto;
	}
	Droga4 = local4;

	for (int i = 0; i < DLUGOSCDROGI5; i++) {
		local5[i] = gcnew Auto;
	}
	Droga5 = local5;

	for (int i = 0; i < DLUGOSCDROGI6; i++) {
		local6[i] = gcnew Auto;
	}
	Droga6 = local6;

	for (int i = 0; i < DLUGOSCDROGI7; i++) {
		local7[i] = gcnew Auto;
	}
	Droga7 = local7;

	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		local8[i] = gcnew Auto;
	}
	Droga8 = local8;

	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		local9[i] = gcnew Auto;
	}
	Droga9 = local9;

	for (int i = 0; i < DLUGOSCDROGI10; i++) {
		local10[i] = gcnew Auto;
	}
	Droga10 = local10;

	for (int i = 0; i < DLUGOSCDROGI11; i++) {
		local11[i] = gcnew Auto;
	}
	Droga11 = local11;

	for (int i = 0; i < DLUGOSCDROGI12; i++) {
		local12[i] = gcnew Auto;
	}
	Droga12 = local12;

	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		local13[i] = gcnew Auto;
	}
	Droga13 = local13;

	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		local14[i] = gcnew Auto;
	}
	Droga14 = local14;

	for (int i = 0; i < DLUGOSCDROGI15; i++) {
		local15[i] = gcnew Auto;
	}
	Droga15 = local15;

	for (int i = 0; i < DLUGOSCDROGI16; i++) {
		local16[i] = gcnew Auto;
	}
	Droga16 = local16;

	for (int i = 0; i < DLUGOSCDROGI17; i++) {
		local17[i] = gcnew Auto;
	}
	Droga17 = local17;

	for (int i = 0; i < DLUGOSCDROGI18; i++) {
		local18[i] = gcnew Auto;
	}
	Droga18 = local18;

	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		local19[i] = gcnew Auto;
	}
	Droga19 = local19;



}

void Mechanika::Przyspieszani_Hamowanie()
{
	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI1) {
					if (Droga1[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga1[i]->predkosc + 100;//wyjscie z pêtli
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga1[i]->predkosc < wolne_miejsca) Droga1[i]->predkosc++;
			if (Droga1[i]->predkosc >= wolne_miejsca) Droga1[i]->predkosc = wolne_miejsca;
			if (Droga1[i]->predkosc >= ograniczenie ) Droga1[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga2[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI2) {
					if (Droga2[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga2[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga2[i]->predkosc < wolne_miejsca) Droga2[i]->predkosc++;
			if (Droga2[i]->predkosc >= wolne_miejsca) Droga2[i]->predkosc = wolne_miejsca;
			if (Droga2[i]->predkosc >= ograniczenie) Droga2[i]->predkosc = ograniczenie ;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI3; i++) {
		if (Droga3[i]->zycie == true && Droga3[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga3[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI3) {
					if (Droga3[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga3[i]->predkosc + 100;
				}
				else {
					//predkosc pozwala wyjechac za tablice
					j = 100;
					Droga3[i]->predkosc = wolne_miejsca;
					specjalny = true;
				}
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (specjalny == false && Droga3[i]->predkosc < wolne_miejsca) Droga3[i]->predkosc++;
			if (specjalny == false && Droga3[i]->predkosc >= wolne_miejsca) Droga3[i]->predkosc = wolne_miejsca;
			if (specjalny == false && Droga3[i]->predkosc >= ograniczenie) Droga3[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI4; i++) {
		if (Droga4[i]->zycie == true && Droga4[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga4[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI4) {
					if (Droga4[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga4[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga4[i]->predkosc < wolne_miejsca) Droga4[i]->predkosc++;
			if (Droga4[i]->predkosc >= wolne_miejsca) Droga4[i]->predkosc = wolne_miejsca;
			if (Droga4[i]->predkosc >= ograniczenie) Droga4[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI5; i++) {
		if (Droga5[i]->zycie == true && Droga5[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga5[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI5) {
					if (Droga5[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga5[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga5[i]->predkosc < wolne_miejsca) Droga5[i]->predkosc++;
			if (Droga5[i]->predkosc >= wolne_miejsca) Droga5[i]->predkosc = wolne_miejsca;
			if (Droga5[i]->predkosc >= ograniczenie) Droga5[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI6; i++) {
		if (Droga6[i]->zycie == true && Droga6[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga6[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI6) {
					if (Droga6[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga6[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga6[i]->predkosc < wolne_miejsca) Droga6[i]->predkosc++;
			if (Droga6[i]->predkosc >= wolne_miejsca) Droga6[i]->predkosc = wolne_miejsca;
			if (Droga6[i]->predkosc >= ograniczenie) Droga6[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI7; i++) {
		if (Droga7[i]->zycie == true && Droga7[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga7[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI7) {
					if (Droga7[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga7[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga7[i]->predkosc < wolne_miejsca) Droga7[i]->predkosc++;
			if (Droga7[i]->predkosc >= wolne_miejsca) Droga7[i]->predkosc = wolne_miejsca;
			if (Droga7[i]->predkosc >= ograniczenie) Droga7[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		if (Droga8[i]->zycie == true && Droga8[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga8[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI8) {
					if (Droga8[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga8[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga8[i]->predkosc < wolne_miejsca) Droga8[i]->predkosc++;
			if (Droga8[i]->predkosc >= wolne_miejsca) Droga8[i]->predkosc = wolne_miejsca;
			if (Droga8[i]->predkosc >= ograniczenie) Droga8[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		if (Droga9[i]->zycie == true && Droga9[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga9[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI9) {
					if (Droga9[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga9[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga9[i]->predkosc < wolne_miejsca) Droga9[i]->predkosc++;
			if (Droga9[i]->predkosc >= wolne_miejsca) Droga9[i]->predkosc = wolne_miejsca;
			if (Droga9[i]->predkosc >= ograniczenie) Droga9[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI10; i++) {
		if (Droga10[i]->zycie == true && Droga10[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga10[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI10) {
					if (Droga10[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga10[i]->predkosc + 1;
				}
				else {
					//predkosc pozwala wyjechac za tablice
					j = 100;
					Droga10[i]->predkosc = wolne_miejsca;
					specjalny = true;
				}
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (specjalny == false && Droga10[i]->predkosc < wolne_miejsca) Droga10[i]->predkosc++;
			if (specjalny == false && Droga10[i]->predkosc >= wolne_miejsca) Droga10[i]->predkosc = wolne_miejsca;
			if (specjalny == false && Droga10[i]->predkosc >= ograniczenie) Droga10[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI11; i++) {
		if (Droga11[i]->zycie == true && Droga11[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga11[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI11) {
					if (Droga11[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga11[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga11[i]->predkosc < wolne_miejsca) Droga11[i]->predkosc++;
			if (Droga11[i]->predkosc >= wolne_miejsca) Droga11[i]->predkosc = wolne_miejsca;
			if (Droga11[i]->predkosc >= ograniczenie) Droga11[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI12; i++) {
		if (Droga12[i]->zycie == true && Droga12[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga12[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI12) {
					if (Droga12[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga12[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga12[i]->predkosc < wolne_miejsca) Droga12[i]->predkosc++;
			if (Droga12[i]->predkosc >= wolne_miejsca) Droga12[i]->predkosc = wolne_miejsca;
			if (Droga12[i]->predkosc >= ograniczenie) Droga12[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		if (Droga13[i]->zycie == true && Droga13[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga13[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI13) {
					if (Droga13[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga13[i]->predkosc + 1;
				}
				else {
					//predkosc pozwala wyjechac za tablice
					j = 100;
					Droga13[i]->predkosc = wolne_miejsca;
					specjalny = true;
				}
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (specjalny == false && Droga13[i]->predkosc < wolne_miejsca) Droga13[i]->predkosc++;
			if (specjalny == false && Droga13[i]->predkosc >= wolne_miejsca) Droga13[i]->predkosc = wolne_miejsca;
			if (specjalny == false && Droga13[i]->predkosc >= ograniczenie) Droga13[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		if (Droga14[i]->zycie == true && Droga14[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga14[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI14) {
					if (Droga14[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga14[i]->predkosc + 1;
				}
				else {
					//predkosc pozwala wyjechac za tablice
					j = 100;
					Droga14[i]->predkosc = wolne_miejsca;
					specjalny = true;
				}
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (specjalny == false && Droga14[i]->predkosc < wolne_miejsca) Droga14[i]->predkosc++;
			if (specjalny == false && Droga14[i]->predkosc >= wolne_miejsca) Droga14[i]->predkosc = wolne_miejsca;
			if (specjalny == false && Droga14[i]->predkosc >= ograniczenie) Droga14[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI15; i++) {
		if (Droga15[i]->zycie == true && Droga15[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga15[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI15) {
					if (Droga15[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga15[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga15[i]->predkosc < wolne_miejsca) Droga15[i]->predkosc++;
			if (Droga15[i]->predkosc >= wolne_miejsca) Droga15[i]->predkosc = wolne_miejsca;
			if (Droga15[i]->predkosc >= ograniczenie) Droga15[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI16; i++) {
		if (Droga16[i]->zycie == true && Droga16[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga16[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI16) {
					if (Droga16[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga16[i]->predkosc + 1;
				}
				else {
					//predkosc pozwala wyjechac za tablice
					j = 100;
					Droga16[i]->predkosc = wolne_miejsca;
					specjalny = true;
				}
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (specjalny == false && Droga16[i]->predkosc < wolne_miejsca) Droga16[i]->predkosc++;
			if (specjalny == false && Droga16[i]->predkosc >= wolne_miejsca) Droga16[i]->predkosc = wolne_miejsca;
			if (specjalny == false && Droga16[i]->predkosc >= ograniczenie) Droga16[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI17; i++) {
		if (Droga17[i]->zycie == true && Droga17[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga17[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI17) {
					if (Droga17[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga17[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga17[i]->predkosc < wolne_miejsca) Droga17[i]->predkosc++;
			if (Droga17[i]->predkosc >= wolne_miejsca) Droga17[i]->predkosc = wolne_miejsca;
			if (Droga17[i]->predkosc >= ograniczenie) Droga17[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI18; i++) {
		if (Droga18[i]->zycie == true && Droga18[i]->przeszkoda == false) {
			if (Droga18[i]->gdzie == 1) {
				int wolne_miejsca = 0;
				bool specjalny = false;
				for (int j = 1; j <= Droga18[i]->predkosc + 1; j++) {
					if (i + j < DLUGOSCDROGI18) {
						if (Droga18[i + j]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					else {
						if (Droga18[i + j - DLUGOSCDROGI18]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					if (i + j == 3) {
						j = 100;
						Droga18[i]->predkosc = wolne_miejsca;
						specjalny = true;
					}
					
				}
				int ograniczenie = OGRANICZENIEPREDKOSCI;
				if (specjalny == false && Droga18[i]->predkosc < wolne_miejsca) Droga18[i]->predkosc++;
				if (specjalny == false && Droga18[i]->predkosc >= wolne_miejsca) Droga18[i]->predkosc = wolne_miejsca;
				if (specjalny == false && Droga18[i]->predkosc >= ograniczenie) Droga18[i]->predkosc = ograniczenie;
			}
			if (Droga18[i]->gdzie == 2) {
				int wolne_miejsca = 0;
				bool specjalny = false;
				for (int j = 1; j <= Droga18[i]->predkosc + 1; j++) {
					if (i + j < DLUGOSCDROGI18) {
						if (Droga18[i + j]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					else {
						if (Droga18[i + j - DLUGOSCDROGI18]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					if (i + j == 3) {
						j = 100;
						Droga18[i]->predkosc = wolne_miejsca;
						specjalny = true;
					}

				}
				int ograniczenie = OGRANICZENIEPREDKOSCI;
				if (specjalny == false && Droga18[i]->predkosc < wolne_miejsca) Droga18[i]->predkosc++;
				if (specjalny == false && Droga18[i]->predkosc >= wolne_miejsca) Droga18[i]->predkosc = wolne_miejsca;
				if (specjalny == false && Droga18[i]->predkosc >= ograniczenie) Droga18[i]->predkosc = ograniczenie;
			}
			if (Droga18[i]->gdzie == 3) {
				int wolne_miejsca = 0;
				bool specjalny = false;
				for (int j = 1; j <= Droga18[i]->predkosc + 1; j++) {
					if (i + j < DLUGOSCDROGI18) {
						if (Droga18[i + j]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					else {
						if (Droga18[i + j - DLUGOSCDROGI18]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					if (i + j == 3) {
						j = 100;
						Droga18[i]->predkosc = wolne_miejsca;
						specjalny = true;
					}

				}
				int ograniczenie = OGRANICZENIEPREDKOSCI;
				if (specjalny == false && Droga18[i]->predkosc < wolne_miejsca) Droga18[i]->predkosc++;
				if (specjalny == false && Droga18[i]->predkosc >= wolne_miejsca) Droga18[i]->predkosc = wolne_miejsca;
				if (specjalny == false && Droga18[i]->predkosc >= ograniczenie) Droga18[i]->predkosc = ograniczenie;
			}
			if (Droga18[i]->gdzie == 4) {
				int wolne_miejsca = 0;
				bool specjalny = false;
				for (int j = 1; j <= Droga18[i]->predkosc + 1; j++) {
					if (i + j < DLUGOSCDROGI18) {
						if (Droga18[i + j]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					else {
						if (Droga18[i + j - DLUGOSCDROGI18]->zycie == false) wolne_miejsca++;
						else j = 100;
					}
					if (i + j == 3) {
						j = 100;
						Droga18[i]->predkosc = wolne_miejsca;
						specjalny = true;
					}

				}
				int ograniczenie = OGRANICZENIEPREDKOSCI;
				if (specjalny == false && Droga18[i]->predkosc < wolne_miejsca) Droga18[i]->predkosc++;
				if (specjalny == false && Droga18[i]->predkosc >= wolne_miejsca) Droga18[i]->predkosc = wolne_miejsca;
				if (specjalny == false && Droga18[i]->predkosc >= ograniczenie) Droga18[i]->predkosc = ograniczenie;
			}
		}
	}
	
	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		if (Droga19[i]->zycie == true && Droga19[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			bool specjalny = false;
			for (int j = 1; j <= Droga19[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI19) {
					if (Droga19[i + j]->zycie == false) wolne_miejsca++;
					else j = 100;
				}
				else {
					if (Droga19[i + j - DLUGOSCDROGI19]->zycie == false) wolne_miejsca++;
					else j = 100;
				}				
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga19[i]->predkosc < wolne_miejsca) Droga19[i]->predkosc++;
			if (Droga19[i]->predkosc >= wolne_miejsca) Droga19[i]->predkosc = wolne_miejsca;
			if (Droga19[i]->predkosc >= ograniczenie) Droga19[i]->predkosc = ograniczenie;
		}
	}
	

}

void Mechanika::Zdarzenia_Losowe()
{
	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga1[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga1[i]->predkosc = 0;
				if (Droga1[i]->predkosc <= 0)Droga1[i]->predkosc = 0;
			}
		}
	}

	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga2[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga2[i]->predkosc = 0;
				if (Droga2[i]->predkosc <= 0)Droga2[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI3; i++) {
		if (Droga3[i]->zycie == true && Droga3[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga3[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga3[i]->predkosc = 0;
				if (Droga3[i]->predkosc <= 0)Droga3[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI4; i++) {
		if (Droga4[i]->zycie == true && Droga4[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga4[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga4[i]->predkosc = 0;
				if (Droga4[i]->predkosc <= 0)Droga4[i]->predkosc = 0;
			}
		}
	}



	for (int i = 0; i < DLUGOSCDROGI5; i++) {
		if (Droga5[i]->zycie == true && Droga5[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga5[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga5[i]->predkosc = 0;
				if (Droga5[i]->predkosc <= 0)Droga5[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI6; i++) {
		if (Droga6[i]->zycie == true && Droga6[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga6[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga6[i]->predkosc = 0;
				if (Droga6[i]->predkosc <= 0)Droga6[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI7; i++) {
		if (Droga7[i]->zycie == true && Droga7[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga7[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga7[i]->predkosc = 0;
				if (Droga7[i]->predkosc <= 0)Droga7[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		if (Droga8[i]->zycie == true && Droga8[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga8[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga8[i]->predkosc = 0;
				if (Droga8[i]->predkosc <= 0)Droga8[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		if (Droga9[i]->zycie == true && Droga9[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga9[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga9[i]->predkosc = 0;
				if (Droga9[i]->predkosc <= 0)Droga9[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI10; i++) {
		if (Droga10[i]->zycie == true && Droga10[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga10[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga10[i]->predkosc = 0;
				if (Droga10[i]->predkosc <= 0)Droga10[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI11; i++) {
		if (Droga11[i]->zycie == true && Droga11[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga11[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga11[i]->predkosc = 0;
				if (Droga11[i]->predkosc <= 0)Droga11[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI12; i++) {
		if (Droga12[i]->zycie == true && Droga12[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga12[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga12[i]->predkosc = 0;
				if (Droga12[i]->predkosc <= 0)Droga12[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		if (Droga13[i]->zycie == true && Droga13[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga13[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga13[i]->predkosc = 0;
				if (Droga13[i]->predkosc <= 0)Droga13[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		if (Droga14[i]->zycie == true && Droga14[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga14[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga14[i]->predkosc = 0;
				if (Droga14[i]->predkosc <= 0)Droga14[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI15; i++) {
		if (Droga15[i]->zycie == true && Droga15[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga15[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga15[i]->predkosc = 0;
				if (Droga15[i]->predkosc <= 0)Droga15[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI16; i++) {
		if (Droga16[i]->zycie == true && Droga16[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga16[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga16[i]->predkosc = 0;
				if (Droga16[i]->predkosc <= 0)Droga16[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI17; i++) {
		if (Droga17[i]->zycie == true && Droga17[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga17[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga17[i]->predkosc = 0;
				if (Droga17[i]->predkosc <= 0)Droga17[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI18; i++) {
		if (Droga18[i]->zycie == true && Droga18[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga18[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga18[i]->predkosc = 0;
				if (Droga18[i]->predkosc <= 0)Droga18[i]->predkosc = 0;
			}
		}
	}


	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		if (Droga19[i]->zycie == true && Droga19[i]->przeszkoda == false) {
			int a = rnd->Next(1, 100);
			if (losowosc >= a) {
				Droga19[i]->predkosc--;
				if (a == 1 || a == 2 || a == 3) Droga19[i]->predkosc = 0;
				if (Droga19[i]->predkosc <= 0)Droga19[i]->predkosc = 0;
			}
		}
	}

}

void Mechanika::Przemieszczenie()
{
#pragma region inicjalizacja_temp
	array< Auto^ >^ Drogatemp1 = gcnew array< Auto^ >(DLUGOSCDROGI1);
	array< Auto^ >^ Drogatemp2 = gcnew array< Auto^ >(DLUGOSCDROGI2);
	array< Auto^ >^ Drogatemp3 = gcnew array< Auto^ >(DLUGOSCDROGI3);
	array< Auto^ >^ Drogatemp4 = gcnew array< Auto^ >(DLUGOSCDROGI4);
	array< Auto^ >^ Drogatemp5 = gcnew array< Auto^ >(DLUGOSCDROGI5);
	array< Auto^ >^ Drogatemp6 = gcnew array< Auto^ >(DLUGOSCDROGI6);
	array< Auto^ >^ Drogatemp7 = gcnew array< Auto^ >(DLUGOSCDROGI7);
	array< Auto^ >^ Drogatemp8 = gcnew array< Auto^ >(DLUGOSCDROGI8);
	array< Auto^ >^ Drogatemp9 = gcnew array< Auto^ >(DLUGOSCDROGI9);
	array< Auto^ >^ Drogatemp10 = gcnew array< Auto^ >(DLUGOSCDROGI10);
	array< Auto^ >^ Drogatemp11 = gcnew array< Auto^ >(DLUGOSCDROGI11);
	array< Auto^ >^ Drogatemp12 = gcnew array< Auto^ >(DLUGOSCDROGI12);
	array< Auto^ >^ Drogatemp13 = gcnew array< Auto^ >(DLUGOSCDROGI13);
	array< Auto^ >^ Drogatemp14 = gcnew array< Auto^ >(DLUGOSCDROGI14);
	array< Auto^ >^ Drogatemp15 = gcnew array< Auto^ >(DLUGOSCDROGI15);
	array< Auto^ >^ Drogatemp16 = gcnew array< Auto^ >(DLUGOSCDROGI16);
	array< Auto^ >^ Drogatemp17 = gcnew array< Auto^ >(DLUGOSCDROGI17);
	array< Auto^ >^ Drogatemp18 = gcnew array< Auto^ >(DLUGOSCDROGI18);
	array< Auto^ >^ Drogatemp19 = gcnew array< Auto^ >(DLUGOSCDROGI19);


	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		Drogatemp1[i] = gcnew Auto;
	}


	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		Drogatemp2[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI3; i++) {
		Drogatemp3[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI4; i++) {
		Drogatemp4[i] = gcnew Auto;
	}
	
	for (int i = 0; i < DLUGOSCDROGI5; i++) {
		Drogatemp5[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI6; i++) {
		Drogatemp6[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI7; i++) {
		Drogatemp7[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		Drogatemp8[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		Drogatemp9[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI10; i++) {
		Drogatemp10[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI11; i++) {
		Drogatemp11[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI12; i++) {
		Drogatemp12[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		Drogatemp13[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		Drogatemp14[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI15; i++) {
		Drogatemp15[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI16; i++) {
		Drogatemp16[i] = gcnew Auto;
	}
	
	for (int i = 0; i < DLUGOSCDROGI17; i++) {
		Drogatemp17[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI18; i++) {
		Drogatemp18[i] = gcnew Auto;
	}
	

	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		Drogatemp19[i] = gcnew Auto;
	}
#pragma endregion

	//------------------------DROGA 1
	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		if (Droga1[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga1[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga1[i]->gdzie == 1 || Droga1[i]->gdzie == 3 || Droga1[i]->gdzie == 4) {
					
					if (i + Droga1[i]->predkosc < DLUGOSCDROGI1) { //czy wyjedzie poza tablice
						Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga1[i]->predkosc - DLUGOSCDROGI1; j++) {
							if (Droga3[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp3[Droga1[i]->predkosc + i - DLUGOSCDROGI1] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
							Droga1[i]->zycie = false;
							Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp3[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
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
						if (i + j < DLUGOSCDROGI1) {
							if (Droga1[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga1[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI1 - 1) {
						Droga1[i]->predkosc = wolne_miejsca;
					}
					Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i];
				}
			}
			else Drogatemp1[i] = Droga1[i];   //postuj dla 1sekundy
			Droga1[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}
	
	//------------------------DROGA 2
	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		if (Droga2[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga2[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga2[i]->gdzie == 2) {

					if (i + Droga2[i]->predkosc < DLUGOSCDROGI2) { //czy wyjedzie poza tablice
						Drogatemp2[i + Droga2[i]->predkosc] = Droga2[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga2[i]->predkosc - DLUGOSCDROGI2; j++) {
							if (Droga4[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga2[i]->predkosc + i - DLUGOSCDROGI2 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp4[Droga2[i]->predkosc + i - DLUGOSCDROGI2] = gcnew Auto(Droga2[i]->predkosc, Droga2[i]->zycie, Droga2[i]->czas_zycia + 1, Droga2[i]->rodzaj, Droga2[i]->widocznosc, Droga2[i]->odwaga, Droga2[i]->zdenerwowanie, Droga2[i]->gdzie);
							Droga2[i]->zycie = false;
							Drogatemp2[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga2[i]->predkosc + i - DLUGOSCDROGI2 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp4[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga2[i]->predkosc, Droga2[i]->zycie, Droga2[i]->czas_zycia + 1, Droga2[i]->rodzaj, Droga2[i]->widocznosc, Droga2[i]->odwaga, Droga2[i]->zdenerwowanie, Droga2[i]->gdzie);
							Droga2[i]->zycie = false;
							Drogatemp2[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp2[i] = Droga2[i];
						}

					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga2[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI2) {
							if (Droga2[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga2[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI2 - 1) {
						Droga2[i]->predkosc = wolne_miejsca;
					}
					Drogatemp2[i + Droga2[i]->predkosc] = Droga2[i];
				}
			}
			else Drogatemp2[i] = Droga2[i];   //postuj dla 1sekundy
			Droga2[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 4
	for (int i = 0; i < DLUGOSCDROGI4; i++) {
		if (Droga4[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga4[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga4[i]->gdzie == 2) {

					if (i + Droga4[i]->predkosc < DLUGOSCDROGI4) { //czy wyjedzie poza tablice
						Drogatemp4[i + Droga4[i]->predkosc] = Droga4[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga4[i]->predkosc - DLUGOSCDROGI4; j++) {
							if (Droga6[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga4[i]->predkosc + i - DLUGOSCDROGI4 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp6[Droga4[i]->predkosc + i - DLUGOSCDROGI4] = gcnew Auto(Droga4[i]->predkosc, Droga4[i]->zycie, Droga4[i]->czas_zycia + 1, Droga4[i]->rodzaj, Droga4[i]->widocznosc, Droga4[i]->odwaga, Droga4[i]->zdenerwowanie, Droga4[i]->gdzie);
							Droga4[i]->zycie = false;
							Drogatemp4[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga4[i]->predkosc + i - DLUGOSCDROGI4 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp6[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga4[i]->predkosc, Droga4[i]->zycie, Droga4[i]->czas_zycia + 1, Droga4[i]->rodzaj, Droga4[i]->widocznosc, Droga4[i]->odwaga, Droga4[i]->zdenerwowanie, Droga4[i]->gdzie);
							Droga4[i]->zycie = false;
							Drogatemp4[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp4[i] = Droga4[i];
						}

					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga4[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI4) {
							if (Droga4[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga4[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI4 - 1) {
						Droga4[i]->predkosc = wolne_miejsca;
					}
					Drogatemp4[i + Droga4[i]->predkosc] = Droga4[i];
				}
			}
			else Drogatemp4[i] = Droga4[i];   //postuj dla 1sekundy
			Droga4[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 5
	for (int i = 0; i < DLUGOSCDROGI5; i++) {
		if (Droga5[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga5[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga5[i]->gdzie == 2) {

					if (i + Droga5[i]->predkosc < DLUGOSCDROGI5) { //czy wyjedzie poza tablice
						Drogatemp5[i + Droga5[i]->predkosc] = Droga5[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga5[i]->predkosc - DLUGOSCDROGI5; j++) {
							if (Droga7[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga5[i]->predkosc + i - DLUGOSCDROGI5 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp7[Droga5[i]->predkosc + i - DLUGOSCDROGI5] = gcnew Auto(Droga5[i]->predkosc, Droga5[i]->zycie, Droga5[i]->czas_zycia + 1, Droga5[i]->rodzaj, Droga5[i]->widocznosc, Droga5[i]->odwaga, Droga5[i]->zdenerwowanie, Droga5[i]->gdzie);
							Droga5[i]->zycie = false;
							Drogatemp5[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga5[i]->predkosc + i - DLUGOSCDROGI5 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp7[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga5[i]->predkosc, Droga5[i]->zycie, Droga5[i]->czas_zycia + 1, Droga5[i]->rodzaj, Droga5[i]->widocznosc, Droga5[i]->odwaga, Droga5[i]->zdenerwowanie, Droga5[i]->gdzie);
							Droga5[i]->zycie = false;
							Drogatemp5[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp5[i] = Droga5[i];
						}

					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga5[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI5) {
							if (Droga5[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga5[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI5 - 1) {
						Droga5[i]->predkosc = wolne_miejsca;
					}
					Drogatemp5[i + Droga5[i]->predkosc] = Droga5[i];
				}
			}
			else Drogatemp5[i] = Droga5[i];   //postuj dla 1sekundy
			Droga5[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 8
	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		if (Droga8[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga8[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga8[i]->gdzie == 2  || Droga8[i]->gdzie == 1 || Droga8[i]->gdzie == 4) {

					if (i + Droga8[i]->predkosc < DLUGOSCDROGI8) { //czy wyjedzie poza tablice
						Drogatemp8[i + Droga8[i]->predkosc] = Droga8[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga8[i]->predkosc - DLUGOSCDROGI8; j++) {
							if (Droga10[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga8[i]->predkosc + i - DLUGOSCDROGI8 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp10[Droga8[i]->predkosc + i - DLUGOSCDROGI8] = gcnew Auto(Droga8[i]->predkosc, Droga8[i]->zycie, Droga8[i]->czas_zycia + 1, Droga8[i]->rodzaj, Droga8[i]->widocznosc, Droga8[i]->odwaga, Droga8[i]->zdenerwowanie, Droga8[i]->gdzie);
							Droga8[i]->zycie = false;
							Drogatemp8[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga8[i]->predkosc + i - DLUGOSCDROGI8 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp10[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga8[i]->predkosc, Droga8[i]->zycie, Droga8[i]->czas_zycia + 1, Droga8[i]->rodzaj, Droga8[i]->widocznosc, Droga8[i]->odwaga, Droga8[i]->zdenerwowanie, Droga8[i]->gdzie);
							Droga8[i]->zycie = false;
							Drogatemp8[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp8[i] = Droga8[i];
						}

					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga8[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI8) {
							if (Droga8[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga8[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI8 - 1) {
						Droga8[i]->predkosc = wolne_miejsca;
					}
					Drogatemp8[i + Droga8[i]->predkosc] = Droga8[i];
				}
			}
			else Drogatemp8[i] = Droga8[i];   //postuj dla 1sekundy
			Droga8[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 9
	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		if (Droga9[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga9[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga9[i]->gdzie == 3) {

					if (i + Droga9[i]->predkosc < DLUGOSCDROGI9) { //czy wyjedzie poza tablice
						Drogatemp9[i + Droga9[i]->predkosc] = Droga9[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						int wolne_miejsca_na_nowej_drodze = 0;
						for (int j = 0; j <= i + Droga9[i]->predkosc - DLUGOSCDROGI9; j++) {
							if (Droga11[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
							else j = 1000;//wyjscie z petli
						}
						//mo¿liwoœci wed³ug wolnych miejsc
						if (Droga9[i]->predkosc + i - DLUGOSCDROGI9 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp11[Droga9[i]->predkosc + i - DLUGOSCDROGI9] = gcnew Auto(Droga9[i]->predkosc, Droga9[i]->zycie, Droga9[i]->czas_zycia + 1, Droga9[i]->rodzaj, Droga9[i]->widocznosc, Droga9[i]->odwaga, Droga9[i]->zdenerwowanie, Droga9[i]->gdzie);
							Droga9[i]->zycie = false;
							Drogatemp9[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (Droga9[i]->predkosc + i - DLUGOSCDROGI9 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
							Drogatemp11[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga9[i]->predkosc, Droga9[i]->zycie, Droga9[i]->czas_zycia + 1, Droga9[i]->rodzaj, Droga9[i]->widocznosc, Droga9[i]->odwaga, Droga9[i]->zdenerwowanie, Droga9[i]->gdzie);
							Droga9[i]->zycie = false;
							Drogatemp9[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
						}
						if (wolne_miejsca_na_nowej_drodze == 0) {
							Drogatemp9[i] = Droga9[i];
						}

					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga9[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI9) {
							if (Droga9[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga9[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI9 - 1) {
						Droga9[i]->predkosc = wolne_miejsca;
					}
					Drogatemp9[i + Droga9[i]->predkosc] = Droga9[i];
				}
			}
			else Drogatemp9[i] = Droga9[i];   //postuj dla 1sekundy
			Droga9[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 6
	for (int i = 0; i < DLUGOSCDROGI6; i++) {
		if (Droga6[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga6[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga6[i]->gdzie == 2) {

					if (i + Droga6[i]->predkosc < DLUGOSCDROGI6) { //czy wyjedzie poza tablice
						Drogatemp6[i + Droga6[i]->predkosc] = Droga6[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp6[i]->zycie = false;
						//infodroga2
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga6[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI6) {
							if (Droga6[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga6[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI6 - 1) {
						Droga6[i]->predkosc = wolne_miejsca;
					}
					Drogatemp6[i + Droga6[i]->predkosc] = Droga6[i];
				}
			}
			else Drogatemp6[i] = Droga6[i];   //postuj dla 1sekundy
			Droga6[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 7
	for (int i = 0; i < DLUGOSCDROGI7; i++) {
		if (Droga7[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga7[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga7[i]->gdzie == 2) {

					if (i + Droga7[i]->predkosc < DLUGOSCDROGI7) { //czy wyjedzie poza tablice
						Drogatemp7[i + Droga7[i]->predkosc] = Droga7[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp7[i]->zycie = false;
						//infodroga2
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga7[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI7) {
							if (Droga7[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga7[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI7 - 1) {
						Droga7[i]->predkosc = wolne_miejsca;
					}
					Drogatemp7[i + Droga7[i]->predkosc] = Droga7[i];
				}
			}
			else Drogatemp7[i] = Droga7[i];   //postuj dla 1sekundy
			Droga7[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 11
	for (int i = 0; i < DLUGOSCDROGI11; i++) {
		if (Droga11[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga11[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga11[i]->gdzie == 3) {

					if (i + Droga11[i]->predkosc < DLUGOSCDROGI11) { //czy wyjedzie poza tablice
						Drogatemp11[i + Droga11[i]->predkosc] = Droga11[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp11[i]->zycie = false;
						//infodroga3
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga11[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI11) {
							if (Droga11[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga11[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI11 - 1) {
						Droga11[i]->predkosc = wolne_miejsca;
					}
					Drogatemp11[i + Droga11[i]->predkosc] = Droga11[i];
				}
			}
			else Drogatemp11[i] = Droga11[i];   //postuj dla 1sekundy
			Droga11[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 12
	for (int i = 0; i < DLUGOSCDROGI12; i++) {
		if (Droga12[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga12[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga12[i]->gdzie == 2) {

					if (i + Droga12[i]->predkosc < DLUGOSCDROGI12) { //czy wyjedzie poza tablice
						Drogatemp12[i + Droga12[i]->predkosc] = Droga12[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp12[i]->zycie = false;
						//infodroga3
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga12[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI12) {
							if (Droga12[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga12[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI12 - 1) {
						Droga12[i]->predkosc = wolne_miejsca;
					}
					Drogatemp12[i + Droga12[i]->predkosc] = Droga12[i];
				}
			}
			else Drogatemp12[i] = Droga12[i];   //postuj dla 1sekundy
			Droga12[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 15
	for (int i = 0; i < DLUGOSCDROGI15; i++) {
		if (Droga15[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga15[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga15[i]->gdzie == 4) {

					if (i + Droga15[i]->predkosc < DLUGOSCDROGI15) { //czy wyjedzie poza tablice
						Drogatemp15[i + Droga15[i]->predkosc] = Droga15[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp15[i]->zycie = false;
						//infodroga4
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga15[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI15) {
							if (Droga15[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga15[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI15 - 1) {
						Droga15[i]->predkosc = wolne_miejsca;
					}
					Drogatemp15[i + Droga15[i]->predkosc] = Droga15[i];
				}
			}
			else Drogatemp15[i] = Droga15[i];   //postuj dla 1sekundy
			Droga15[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}

	//------------------------DROGA 17
	for (int i = 0; i < DLUGOSCDROGI17; i++) {
		if (Droga17[i]->zycie == true) {			//sprawdzenie czy istnieje auto
			if (Droga17[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
				if (Droga17[i]->gdzie == 1) {

					if (i + Droga17[i]->predkosc < DLUGOSCDROGI17) { //czy wyjedzie poza tablice
						Drogatemp17[i + Droga17[i]->predkosc] = Droga17[i]; //ustawinie nowego miejsca
					}
					//wyjazd z drogi
					else {
						Drogatemp17[i]->zycie = false;
						//infodroga1
					}

				}
				else {
					int wolne_miejsca = 0;
					for (int j = 1; j <= Droga17[i]->predkosc + 1; j++) {
						if (i + j < DLUGOSCDROGI17) {
							if (Droga17[i + j]->zycie == false) {
								wolne_miejsca++;
							}
							else j = Droga17[i]->predkosc + 100;//wyjscie z pêtli
						}
					}
					if (i + wolne_miejsca >= DLUGOSCDROGI17 - 1) {
						Droga17[i]->predkosc = wolne_miejsca;
					}
					Drogatemp17[i + Droga17[i]->predkosc] = Droga17[i];
				}
			}
			else Drogatemp17[i] = Droga17[i];   //postuj dla 1sekundy
			Droga17[i]->czas_zycia++;		//inkrementacja ¿ycia
		}
	}



	////------------------------DROGA 3
	//for (int i = 0; i < DLUGOSCDROGI3; i++) {
	//	if (Droga3[i]->zycie == true) {			//sprawdzenie czy istnieje auto
	//		if (Droga3[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
	//			if (Droga3[i]->gdzie == 3 || Droga3[i]->gdzie == 1 || Droga3[i]->gdzie == 4) {
	//				if (i + Droga3[i]->predkosc < DLUGOSCDROGI3) { //czy wyjedzie poza tablice
	//					Drogatemp3[i + Droga3[i]->predkosc] = Droga3[i]; //ustawinie nowego miejsca
	//				}
	//				//wyjazd z drogi
	//				else {
	//					int wolne_miejsca_na_nowej_drodze = 0;
	//					for (int j = 0; j <= i + Droga3[i]->predkosc - DLUGOSCDROGI3; j++) {
	//						if (Droga18[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
	//						else j = 1000;//wyjscie z petli
	//					}
	//					
	//					
	//					int wolne_mijsce_zmiana = 0;
	//					for (int k = 0; i - k >= 0 && Droga2[i - k]->zycie == false; k++) {
	//						wolne_mijsce_zmiana++;
	//					}
	//					//mo¿liwoœci wed³ug wolnych miejsc
	//					if (Droga3[i]->predkosc + i - DLUGOSCDROGI3 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
	//						Drogatemp18[Droga3[i]->predkosc + i - DLUGOSCDROGI3] = gcnew Auto(Droga3[i]->predkosc, Droga3[i]->zycie, Droga3[i]->czas_zycia + 1, Droga3[i]->rodzaj, Droga3[i]->widocznosc, Droga3[i]->odwaga, Droga3[i]->zdenerwowanie, Droga3[i]->gdzie);
	//						Droga3[i]->zycie = false;
	//						Drogatemp3[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
	//					}
	//					if (Droga3[i]->predkosc + i - DLUGOSCDROGI3 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
	//						Drogatemp18[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga3[i]->predkosc, Droga3[i]->zycie, Droga3[i]->czas_zycia + 1, Droga3[i]->rodzaj, Droga3[i]->widocznosc, Droga3[i]->odwaga, Droga3[i]->zdenerwowanie, Droga3[i]->gdzie);
	//						Droga3[i]->zycie = false;
	//						Drogatemp3[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
	//					}
	//					if (wolne_miejsca_na_nowej_drodze == 0) {
	//						Drogatemp3[i] = Droga3[i];
	//					}
	//				}
	//			}
	//			else {
	//				int wolne_miejsca = 0;
	//				for (int j = 1; j <= Droga3[i]->predkosc + 1; j++) {
	//					if (i + j < DLUGOSCDROGI3) {
	//						if (Droga3[i + j]->zycie == false) {
	//							wolne_miejsca++;
	//						}
	//						else j = Droga3[i]->predkosc + 100;//wyjscie z pêtli
	//					}
	//				}
	//				if (i + wolne_miejsca >= DLUGOSCDROGI3 - 1) {
	//					Droga3[i]->predkosc = wolne_miejsca;
	//				}
	//				Drogatemp3[i + Droga3[i]->predkosc] = Droga3[i];
	//			}
	//		}
	//		else Drogatemp3[i] = Droga3[i];   //postuj dla 1sekundy
	//		Droga3[i]->czas_zycia++;		//inkrementacja ¿ycia
	//	}
	//}



	//------------------------DROGA 3
	for (int i = 0; i < DLUGOSCDROGI3; i++) {
		if (Droga3[i]->zycie == true && Droga3[i]->przeszkoda == false) {
			Drogatemp3[i + Droga3[i]->predkosc] = Droga3[i];
			Droga3[i]->czas_zycia++;
		}
	}
	//------------------------DROGA 10
	for (int i = 0; i < DLUGOSCDROGI10; i++) {
		if (Droga10[i]->zycie == true && Droga10[i]->przeszkoda == false) {
			Drogatemp10[i + Droga10[i]->predkosc] = Droga10[i];
			Droga10[i]->czas_zycia++;
		}
	}
	//------------------------DROGA 13
	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		if (Droga13[i]->zycie == true && Droga13[i]->przeszkoda == false) {
			Drogatemp13[i + Droga13[i]->predkosc] = Droga13[i];
			Droga13[i]->czas_zycia++;
		}
	}
	//------------------------DROGA 14
	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		if (Droga14[i]->zycie == true && Droga14[i]->przeszkoda == false) {
			Drogatemp14[i + Droga14[i]->predkosc] = Droga14[i];
			Droga14[i]->czas_zycia++;
		}
	}
	//------------------------DROGA 16
	for (int i = 0; i < DLUGOSCDROGI16; i++) {
		if (Droga16[i]->zycie == true && Droga16[i]->przeszkoda == false) {
			Drogatemp16[i + Droga16[i]->predkosc] = Droga16[i];
			Droga16[i]->czas_zycia++;
		}
	}

	//------------------------DROGA 18
	for (int i = 0; i < DLUGOSCDROGI18; i++) {
		if (Droga18[i]->zycie == true && Droga18[i]->przeszkoda == false) {
			if (i + Droga18[i]->predkosc >= DLUGOSCDROGI18) {
				Drogatemp18[i + Droga18[i]->predkosc - DLUGOSCDROGI18] = Droga18[i];
				Droga18[i]->czas_zycia++;
			}
			else {
				Drogatemp18[i + Droga18[i]->predkosc] = Droga18[i];
				Droga18[i]->czas_zycia++;
			}

		}
	}

	//------------------------DROGA 19
	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		if (Droga19[i]->zycie == true && Droga19[i]->przeszkoda == false) {
			if (i + Droga19[i]->predkosc >= DLUGOSCDROGI19) {
				Drogatemp19[i + Droga19[i]->predkosc - DLUGOSCDROGI19] = Droga19[i];
				Droga19[i]->czas_zycia++;
			}
			else {
				Drogatemp19[i + Droga19[i]->predkosc] = Droga19[i];
				Droga19[i]->czas_zycia++;
			}

		}
	}


	Droga1 = Drogatemp1;
	Droga2 = Drogatemp2;
	Droga3 = Drogatemp3;
	Droga4 = Drogatemp4;
	Droga5 = Drogatemp5;
	Droga6 = Drogatemp6;
	Droga7 = Drogatemp7;
	Droga8 = Drogatemp8;
	Droga9 = Drogatemp9;
	Droga10 = Drogatemp10;
	Droga11 = Drogatemp11;
	Droga12 = Drogatemp12;
	Droga13 = Drogatemp13;
	Droga14 = Drogatemp14;
	Droga15 = Drogatemp15;
	Droga16 = Drogatemp16;
	Droga17 = Drogatemp17;
	Droga18 = Drogatemp18;
	Droga19 = Drogatemp19;
}

void Mechanika::Zmiana_Pasa()
{

	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			int odleglosc_przeszkody = 0;
			bool jest_przeszkoda = false;
			for (int j = 1; j + i < DLUGOSCDROGI1; j++) {
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
			Droga1[0]->gdzie = rnd->Next(1, 4);//popraw dla innych
		}
	}

	if (Droga2[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga2[0]->zycie = true;
			Droga2[0]->czas_zycia = 0;
			Droga2[0]->predkosc = rnd->Next(1, 3);
			Droga2[0]->rodzaj = rnd->Next(1, 4);
			Droga2[0]->gdzie = rnd->Next(1, 4);
		}
	}

	if (Droga8[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga8[0]->zycie = true;
			Droga8[0]->czas_zycia = 0;
			Droga8[0]->predkosc = rnd->Next(1, 3);
			Droga8[0]->rodzaj = rnd->Next(1, 4);
			Droga8[0]->gdzie = rnd->Next(1, 4);
		}
	}
	if (Droga9[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga9[0]->zycie = true;
			Droga9[0]->czas_zycia = 0;
			Droga9[0]->predkosc = rnd->Next(1, 3);
			Droga9[0]->rodzaj = rnd->Next(1, 4);
			Droga9[0]->gdzie = 3;
		}
	}
	if (Droga13[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga13[0]->zycie = true;
			Droga13[0]->czas_zycia = 0;
			Droga13[0]->predkosc = rnd->Next(1, 3);
			Droga13[0]->rodzaj = rnd->Next(1, 4);
			Droga13[0]->gdzie = rnd->Next(1, 4);
		}
	}
	if (Droga14[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga14[0]->zycie = true;
			Droga14[0]->czas_zycia = 0;
			Droga14[0]->predkosc = rnd->Next(1, 3);
			Droga14[0]->rodzaj = rnd->Next(1, 4);
			Droga14[0]->gdzie = rnd->Next(1, 4);
		}
	}
	if (Droga16[0]->zycie == false) {
		int a = rnd->Next(1, 10);
		if (natezenie >= a) {
			Droga16[0]->zycie = true;
			Droga16[0]->czas_zycia = 0;
			Droga16[0]->predkosc = rnd->Next(1, 3);
			Droga16[0]->rodzaj = rnd->Next(1, 4);
			Droga16[0]->gdzie = rnd->Next(1, 4);
		}
	}
}

void Mechanika::Wybor_Pasa()
{

	//------------Dla drogi 1
	for (int i = 0; i < DLUGOSCDROGI1; i++) {
		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga1[i]->gdzie == 2) {
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

	//-------------------Dla drogi 2
	for (int i = 0; i < DLUGOSCDROGI2; i++) {
		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga2[i]->gdzie == 3 || Droga2[i]->gdzie == 4 || Droga2[i]->gdzie == 1) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga1[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga2[i]->odwaga < wolne_mijsce_zmiana) {
					Droga1[i] = gcnew Auto(Droga2[i]->predkosc, Droga2[i]->zycie, Droga2[i]->czas_zycia, Droga2[i]->rodzaj, Droga2[i]->widocznosc, Droga2[i]->odwaga, Droga2[i]->zdenerwowanie, Droga2[i]->gdzie);
					Droga2[i]->zycie = false; // zmiana pasa
				}
			}
		}
	}

	//-------------------Dla drogi 8
	for (int i = 0; i < DLUGOSCDROGI8; i++) {
		if (Droga8[i]->zycie == true && Droga8[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga8[i]->gdzie == 3) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga9[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga8[i]->odwaga < wolne_mijsce_zmiana) {
					Droga9[i] = gcnew Auto(Droga8[i]->predkosc, Droga8[i]->zycie, Droga8[i]->czas_zycia, Droga8[i]->rodzaj, Droga8[i]->widocznosc, Droga8[i]->odwaga, Droga8[i]->zdenerwowanie, Droga8[i]->gdzie);
					Droga8[i]->zycie = false; // zmiana pasa
				}
			}
		}
	}

	//-------------------Dla drogi 9
	for (int i = 0; i < DLUGOSCDROGI9; i++) {
		if (Droga9[i]->zycie == true && Droga9[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga9[i]->gdzie == 2 || Droga9[i]->gdzie == 4 || Droga9[i]->gdzie == 1) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga8[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga9[i]->odwaga < wolne_mijsce_zmiana) {
					Droga8[i] = gcnew Auto(Droga9[i]->predkosc, Droga9[i]->zycie, Droga9[i]->czas_zycia, Droga9[i]->rodzaj, Droga9[i]->widocznosc, Droga9[i]->odwaga, Droga9[i]->zdenerwowanie, Droga9[i]->gdzie);
					Droga9[i]->zycie = false; // zmiana pasa
				}
			}
		}
	}

	//-------------------Dla drogi 13
	for (int i = 0; i < DLUGOSCDROGI13; i++) {
		if (Droga13[i]->zycie == true && Droga13[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga13[i]->gdzie == 4) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga14[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga13[i]->odwaga < wolne_mijsce_zmiana) {
					Droga14[i] = gcnew Auto(Droga13[i]->predkosc, Droga13[i]->zycie, Droga13[i]->czas_zycia, Droga13[i]->rodzaj, Droga13[i]->widocznosc, Droga13[i]->odwaga, Droga13[i]->zdenerwowanie, Droga13[i]->gdzie);
					Droga13[i]->zycie = false; // zmiana pasa
				}
			}
		}
	}

	//-------------------Dla drogi 14
	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		if (Droga14[i]->zycie == true && Droga14[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
			if (Droga14[i]->gdzie == 3) {
				int wolne_mijsce_zmiana = 0;
				for (int k = 0; i - k >= 0 && Droga13[i - k]->zycie == false; k++) {
					wolne_mijsce_zmiana++;
				}
				if (Droga14[i]->odwaga < wolne_mijsce_zmiana) {
					Droga13[i] = gcnew Auto(Droga14[i]->predkosc, Droga14[i]->zycie, Droga14[i]->czas_zycia, Droga14[i]->rodzaj, Droga14[i]->widocznosc, Droga14[i]->odwaga, Droga14[i]->zdenerwowanie, Droga14[i]->gdzie);
					Droga14[i]->zycie = false; // zmiana pasa
				}
			}
		}
	}


}

void Mechanika::Skrecanie()
{
	//------z drogi 3
	if (Droga3[11]->zycie == true) {
		int wolne_miejsca = 0;
		for (int k = 7; k >= 3; k--) {
			if (Droga18[k]->zycie == false) wolne_miejsca++;
			else k = -1;
		}
		if (wolne_miejsca>=Droga3[11]->odwaga){
			Droga18[7] = gcnew Auto(1, Droga3[11]->zycie, Droga3[11]->czas_zycia, Droga3[11]->rodzaj, Droga3[11]->widocznosc, Droga3[11]->odwaga, Droga3[11]->zdenerwowanie, Droga3[11]->gdzie);
			Droga3[11]->zycie = false; // zmiana pasa
		}
			
	}

	//------z drogi 10
	if (Droga10[12]->zycie == true) {
		int wolne_miejsca = 0;
		for (int k = 19; k >= 15; k--) {
			if (Droga18[k]->zycie == false) wolne_miejsca++;
			else k = -1;
		}
		if (wolne_miejsca >= Droga10[12]->odwaga) {
			Droga18[19] = gcnew Auto(1, Droga10[12]->zycie, Droga10[12]->czas_zycia, Droga10[12]->rodzaj, Droga10[12]->widocznosc, Droga10[12]->odwaga, Droga10[12]->zdenerwowanie, Droga10[12]->gdzie);
			Droga10[12]->zycie = false; // zmiana pasa
		}

	}

	//------z drogi 16
	if (Droga16[5]->zycie == true) {
		int wolne_miejsca = 0;
		for (int k = 32; k >= 28; k--) {
			if (Droga18[k]->zycie == false) wolne_miejsca++;
			else k = -1;
		}
		if (wolne_miejsca >= Droga16[5]->odwaga) {
			Droga18[32] = gcnew Auto(Droga16[5]->predkosc, Droga16[5]->zycie, Droga16[5]->czas_zycia, Droga16[5]->rodzaj, Droga16[5]->widocznosc, Droga16[5]->odwaga, Droga16[5]->zdenerwowanie, Droga16[5]->gdzie);
			Droga16[5]->zycie = false; // zmiana pasa
		}

	}

	//------z drogi 14
	if (Droga14[13]->zycie == true) {
		int wolne_miejsca = 0;
		for (int k = 26; k >= 22; k--) {
			if (Droga18[k]->zycie == false) wolne_miejsca++;
			else k = -1;
		}
		if (wolne_miejsca >= Droga14[13]->odwaga) {
			Droga18[26] = gcnew Auto(1, Droga14[13]->zycie, Droga14[13]->czas_zycia, Droga14[13]->rodzaj, Droga14[13]->widocznosc, Droga14[13]->odwaga, Droga14[13]->zdenerwowanie, Droga14[13]->gdzie);
			Droga14[13]->zycie = false; // zmiana pasa
		}

	}
	
	//------z drogi 13
	if (Droga13[13]->zycie == true) {
		int wolne_miejsca1 = 0;
		int wolne_miejsca2 = 0;
		for (int k = 26; k >= 22; k--) {
			if (Droga18[k]->zycie == false) wolne_miejsca1++;
			else k = -1;
		}
		for (int k = 26; k >= 22; k--) {
			if (Droga19[k]->zycie == false) wolne_miejsca2++;
			else k = -1;
		}
		if (wolne_miejsca1 >= Droga13[13]->odwaga && wolne_miejsca2 >= Droga13[13]->odwaga) {
			Droga19[26] = gcnew Auto(1, Droga13[13]->zycie, Droga13[13]->czas_zycia, Droga13[13]->rodzaj, Droga13[13]->widocznosc, Droga13[13]->odwaga, Droga13[13]->zdenerwowanie, Droga13[13]->gdzie);
			Droga13[13]->zycie = false; // zmiana pasa
		}

	}

	//------z drogi 18 zjazd 1
	if (Droga18[3]->zycie == true) {
		
		if (Droga18[3]->gdzie==1 && Droga17[0]->zycie==false) {
			Droga17[0] = gcnew Auto(1, Droga18[3]->zycie, Droga18[3]->czas_zycia, Droga18[3]->rodzaj, Droga18[3]->widocznosc, Droga18[3]->odwaga, Droga18[3]->zdenerwowanie, Droga18[3]->gdzie);
			Droga18[3]->zycie = false; // zmiana pasa
		}

	}

	//------z drogi 18 zjazd 2
	if (Droga18[14]->zycie == true) {

		if (Droga18[14]->gdzie == 2 && Droga5[0]->zycie == false) {
			Droga5[0] = gcnew Auto(1, Droga18[14]->zycie, Droga18[14]->czas_zycia, Droga18[14]->rodzaj, Droga18[14]->widocznosc, Droga18[14]->odwaga, Droga18[14]->zdenerwowanie, Droga18[14]->gdzie);
			Droga18[14]->zycie = false; // zmiana pasa
		}

	}
	
	//------z drogi 18 zjazd 3
	if (Droga18[23]->zycie == true) {

		if (Droga18[23]->gdzie == 3 && Droga12[0]->zycie == false) {
			Droga12[0] = gcnew Auto(1, Droga18[23]->zycie, Droga18[23]->czas_zycia, Droga18[23]->rodzaj, Droga18[23]->widocznosc, Droga18[23]->odwaga, Droga18[23]->zdenerwowanie, Droga18[23]->gdzie);
			Droga18[23]->zycie = false; // zmiana pasa
		}

	}

	//------z drogi 18 zjazd 4
	if (Droga18[30]->zycie == true) {

		if (Droga18[30]->gdzie == 4 && Droga15[0]->zycie == false) {
			Droga15[0] = gcnew Auto(1, Droga18[30]->zycie, Droga18[30]->czas_zycia, Droga18[30]->rodzaj, Droga18[30]->widocznosc, Droga18[30]->odwaga, Droga18[30]->zdenerwowanie, Droga18[30]->gdzie);
			Droga18[30]->zycie = false; // zmiana pasa
		}

	}
}


#pragma region DajDroge
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

array<Auto^>^ Mechanika::DajDroge5()
{
	return Droga5;
}

array<Auto^>^ Mechanika::DajDroge6()
{
	return Droga6;
}

array<Auto^>^ Mechanika::DajDroge7()
{
	return Droga7;
}

array<Auto^>^ Mechanika::DajDroge8()
{
	return Droga8;
}

array<Auto^>^ Mechanika::DajDroge9()
{
	return Droga9;
}

array<Auto^>^ Mechanika::DajDroge10()
{
	return Droga10;
}

array<Auto^>^ Mechanika::DajDroge11()
{
	return Droga11;
}

array<Auto^>^ Mechanika::DajDroge12()
{
	return Droga12;
}

array<Auto^>^ Mechanika::DajDroge13()
{
	return Droga13;
}

array<Auto^>^ Mechanika::DajDroge14()
{
	return Droga14;
}

array<Auto^>^ Mechanika::DajDroge15()
{
	return Droga15;
}

array<Auto^>^ Mechanika::DajDroge16()
{
	return Droga16;
}

array<Auto^>^ Mechanika::DajDroge17()
{
	return Droga17;
}

array<Auto^>^ Mechanika::DajDroge18()
{
	return Droga18;
}

array<Auto^>^ Mechanika::DajDroge19()
{
	return Droga19;
}
#pragma endregion


void Mechanika::Ustawwaruki(int natezeniee, int losowoscc)
{
	natezenie = natezeniee;
	losowosc = losowoscc;
}