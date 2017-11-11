#pragma once
#include "Auto.h"
#include <time.h>
using namespace System;
ref class Mechanika
{
public:
	Mechanika();
	void Przyspieszani_Hamowanie();
	void Zdarzenia_Losowe();
	void Przemieszczenie();
	void Zmiana_Pasa();
	void Ustaw_Przeszkode();
	void Nowe_Auto();
	void Wybor_Pasa();



	void Ustawwaruki(int natezeniee, int losowoscc);

	array< Auto^ >^ DajDroge1();
	array< Auto^ >^ DajDroge2();
	array< Auto^ >^ DajDroge3();
	array< Auto^ >^ DajDroge4();
private:
	Random^ rnd;
	int natezenie = 7;
	int losowosc = 20;
	array< Auto^ >^ Droga1;
	array< Auto^ >^ Droga2;
	array< Auto^ >^ Droga3;
	array< Auto^ >^ Droga4;
	
};

