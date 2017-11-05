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
	void Nowe_Auto();
	array< Auto^ >^ DajDroge1();
	array< Auto^ >^ DajDroge2();
private:
	Random^ rnd;
	int natezenie = 10;
	int losowosc = 35;


	array< Auto^ >^ Droga1;
	array< Auto^ >^ Droga2;
	
};

