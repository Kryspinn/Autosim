#include "Mechanika.h"
#include "Auto.h"
#include <time.h>
#define DLUGOSCDROGI1 13
#define DLUGOSCDROGI2 13
#define DLUGOSCDROGI3 13
#define DLUGOSCDROGI4 13
#define DLUGOSCDROGI5 13
#define DLUGOSCDROGI6 13
#define DLUGOSCDROGI7 13
#define DLUGOSCDROGI8 13
#define DLUGOSCDROGI9 13
#define DLUGOSCDROGI10 13
#define DLUGOSCDROGI11 13
#define DLUGOSCDROGI12 13
#define DLUGOSCDROGI13 13
#define DLUGOSCDROGI14 13
#define DLUGOSCDROGI15 13
#define DLUGOSCDROGI16 13
#define DLUGOSCDROGI17 13
#define DLUGOSCDROGI18 13
#define DLUGOSCDROGI19 13


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
			for (int j = 1; j <= Droga3[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI3) {
					if (Droga3[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga3[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga3[i]->predkosc < wolne_miejsca) Droga3[i]->predkosc++;
			if (Droga3[i]->predkosc >= wolne_miejsca) Droga3[i]->predkosc = wolne_miejsca;
			if (Droga3[i]->predkosc >= ograniczenie) Droga3[i]->predkosc = ograniczenie;
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
			for (int j = 1; j <= Droga10[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI10) {
					if (Droga10[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga10[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga10[i]->predkosc < wolne_miejsca) Droga10[i]->predkosc++;
			if (Droga10[i]->predkosc >= wolne_miejsca) Droga10[i]->predkosc = wolne_miejsca;
			if (Droga10[i]->predkosc >= ograniczenie) Droga10[i]->predkosc = ograniczenie;
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
			for (int j = 1; j <= Droga13[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI13) {
					if (Droga13[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga13[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga13[i]->predkosc < wolne_miejsca) Droga13[i]->predkosc++;
			if (Droga13[i]->predkosc >= wolne_miejsca) Droga13[i]->predkosc = wolne_miejsca;
			if (Droga13[i]->predkosc >= ograniczenie) Droga13[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI14; i++) {
		if (Droga14[i]->zycie == true && Droga14[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga14[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI14) {
					if (Droga14[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga14[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga14[i]->predkosc < wolne_miejsca) Droga14[i]->predkosc++;
			if (Droga14[i]->predkosc >= wolne_miejsca) Droga14[i]->predkosc = wolne_miejsca;
			if (Droga14[i]->predkosc >= ograniczenie) Droga14[i]->predkosc = ograniczenie;
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
			for (int j = 1; j <= Droga16[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI16) {
					if (Droga16[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga16[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga16[i]->predkosc < wolne_miejsca) Droga16[i]->predkosc++;
			if (Droga16[i]->predkosc >= wolne_miejsca) Droga16[i]->predkosc = wolne_miejsca;
			if (Droga16[i]->predkosc >= ograniczenie) Droga16[i]->predkosc = ograniczenie;
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
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga18[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI18) {
					if (Droga18[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga18[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
			}
			int ograniczenie = OGRANICZENIEPREDKOSCI;
			if (Droga18[i]->predkosc < wolne_miejsca) Droga18[i]->predkosc++;
			if (Droga18[i]->predkosc >= wolne_miejsca) Droga18[i]->predkosc = wolne_miejsca;
			if (Droga18[i]->predkosc >= ograniczenie) Droga18[i]->predkosc = ograniczenie;
		}
	}

	for (int i = 0; i < DLUGOSCDROGI19; i++) {
		if (Droga19[i]->zycie == true && Droga19[i]->przeszkoda == false) {
			int wolne_miejsca = 0;
			for (int j = 1; j <= Droga19[i]->predkosc + 1; j++) {
				if (i + j < DLUGOSCDROGI19) {
					if (Droga19[i + j]->zycie == false) {
						wolne_miejsca++;
					}
					else j = Droga19[i]->predkosc + 1;
				}
				else wolne_miejsca = 10;
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

//void Mechanika::Przemieszczenie()
//{
//	array< Auto^ >^ localtemp1 = gcnew array< Auto^ >(DLUGOSCDROGI1);
//	array< Auto^ >^ localtemp2 = gcnew array< Auto^ >(DLUGOSCDROGI2);
//	array< Auto^ >^ localtemp3 = gcnew array< Auto^ >(DLUGOSCDROGI3);
//	array< Auto^ >^ localtemp4 = gcnew array< Auto^ >(DLUGOSCDROGI4);
//
//
//
//	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
//		localtemp1[i] = gcnew Auto;
//		localtemp2[i] = gcnew Auto;
//		localtemp3[i] = gcnew Auto;
//		localtemp4[i] = gcnew Auto;
//	}
//
//
//	array< Auto^ >^ Drogatemp1 = localtemp1;
//	array< Auto^ >^ Drogatemp2 = localtemp2;
//	array< Auto^ >^ Drogatemp3 = localtemp3;
//	array< Auto^ >^ Drogatemp4 = localtemp4;
//
//
//
//
//
//	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
//		if (Droga1[i]->zycie == true) {			//sprawdzenie czy istnieje auto
//			if (Droga1[i]->czas_zycia >= 1) {	//postuj jednej sekundy na stacie
//				if (Droga1[i]->gdzie == 2) {
//					if (i + Droga1[i]->predkosc < DLUGOSCDROGI1_2) { //czy wyjedzie poza tablice
//						Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i]; //ustawinie nowego miejsca
//					}
//					else {
//						int wolne_miejsca_na_nowej_drodze = 0;
//						for (int j = 0; j <= i + Droga1[i]->predkosc - DLUGOSCDROGI1_2; j++) {
//							if (Droga4[j]->zycie == false) wolne_miejsca_na_nowej_drodze++; //sprawdzamy droge do której siê udajemy
//							else j = 1000;//wyjscie z petli
//						}
//						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1_2 < wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
//							Drogatemp4[Droga1[i]->predkosc + i - DLUGOSCDROGI1_2] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
//							Droga1[i]->zycie = false;
//							Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
//						}
//						if (Droga1[i]->predkosc + i - DLUGOSCDROGI1_2 >= wolne_miejsca_na_nowej_drodze && wolne_miejsca_na_nowej_drodze != 0) {
//							Drogatemp4[wolne_miejsca_na_nowej_drodze - 1] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia + 1, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
//							Droga1[i]->zycie = false;
//							Drogatemp1[i]->zycie = false;	//jak wyjedzie to znika ii ma sie pojawiæ w kolejnej tablicy
//						}
//						if (wolne_miejsca_na_nowej_drodze == 0) {
//							Drogatemp1[i] = Droga1[i];
//						}
//
//
//
//
//
//					}
//				}
//				else {
//					int wolne_miejsca = 0;
//					for (int j = 1; j <= Droga1[i]->predkosc + 1; j++) {
//						if (i + j < DLUGOSCDROGI1_2) {
//							if (Droga1[i + j]->zycie == false) {
//								wolne_miejsca++;
//							}
//							else j = Droga1[i]->predkosc + 100;//wyjscie z pêtli
//						}
//					}
//					if (i + wolne_miejsca >= DLUGOSCDROGI1_2 - 1) {
//						Droga1[i]->predkosc = wolne_miejsca;
//					}
//					Drogatemp1[i + Droga1[i]->predkosc] = Droga1[i];
//				}
//			}
//			else Drogatemp1[i] = Droga1[i];   //postuj dla 1sekundy
//			Droga1[i]->czas_zycia++;		//inkrementacja ¿ycia
//		}
//	}
//
//
//
//
//
//
//	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
//		if (Droga2[i]->zycie == true && Droga2[i]->przeszkoda == false) {
//			if (Droga2[i]->czas_zycia >= 1) {
//				if (i + Droga2[i]->predkosc < DLUGOSCDROGI1_2) {
//					Drogatemp2[i + Droga2[i]->predkosc] = Droga2[i];
//				}
//				else {
//					Drogatemp2[i]->zycie = false;
//
//				}
//			}
//			else {
//				Drogatemp2[i] = Droga2[i];
//			}
//			Droga2[i]->czas_zycia++;
//		}
//	}
//
//
//
//	Droga1 = Drogatemp1;
//	Droga2 = Drogatemp2;
//	Droga3 = Drogatemp3;
//	Droga4 = Drogatemp4;
//}
//
//void Mechanika::Zmiana_Pasa()
//{
//
//	for (int i = 0; i < DLUGOSCDROGI1_2; i++) {
//		if (Droga1[i]->zycie == true && Droga1[i]->przeszkoda == false) {		//sprawdzenie czy istnieje auto
//			int odleglosc_przeszkody = 0;
//			bool jest_przeszkoda = false;
//			for (int j = 1; j + i < DLUGOSCDROGI1_2; j++) {
//				if (Droga1[j + i]->przeszkoda == false) {
//					odleglosc_przeszkody++;
//				}
//				else {
//					j = 100;//wyjscie z pêtli
//					jest_przeszkoda = true;
//				}
//			}
//			if (Droga1[i]->widocznosc >= odleglosc_przeszkody && jest_przeszkoda == true) {
//				//widaæ przeszkode
//				int wolne_mijsce_zmiana = 0;
//				for (int k = 0; i - k >= 0 && Droga2[i - k]->zycie == false; k++) {
//					wolne_mijsce_zmiana++;
//				}
//				if (Droga1[i + 1]->zycie == false || (Droga1[i + 1]->zycie == true && Droga1[i + 1]->przeszkoda == true)) {
//					if (Droga1[i]->odwaga < wolne_mijsce_zmiana) {
//						Droga2[i] = gcnew Auto(Droga1[i]->predkosc, Droga1[i]->zycie, Droga1[i]->czas_zycia, Droga1[i]->rodzaj, Droga1[i]->widocznosc, Droga1[i]->odwaga, Droga1[i]->zdenerwowanie, Droga1[i]->gdzie);
//						Droga1[i]->zycie = false;
//					}
//					else Droga1[i]->predkosc = odleglosc_przeszkody;
//				}
//				else Droga1[i]->predkosc = odleglosc_przeszkody;
//			}
//		}
//	}
//}

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
			Droga9[0]->gdzie = rnd->Next(1, 4);
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