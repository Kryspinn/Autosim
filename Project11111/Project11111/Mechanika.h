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
	void Skrecanie();
	void Denerwowanie();
	String^ zrobczas(int czas);
	


	void Ustawwaruki(int natezeniee, int losowoscc);

	array< Auto^ >^ DajDroge1();
	array< Auto^ >^ DajDroge2();
	array< Auto^ >^ DajDroge3();
	array< Auto^ >^ DajDroge4();
	array< Auto^ >^ DajDroge5();
	array< Auto^ >^ DajDroge6();
	array< Auto^ >^ DajDroge7();
	array< Auto^ >^ DajDroge8();
	array< Auto^ >^ DajDroge9();
	array< Auto^ >^ DajDroge10();
	array< Auto^ >^ DajDroge11();
	array< Auto^ >^ DajDroge12();
	array< Auto^ >^ DajDroge13();
	array< Auto^ >^ DajDroge14();
	array< Auto^ >^ DajDroge15();
	array< Auto^ >^ DajDroge16();
	array< Auto^ >^ DajDroge17();
	array< Auto^ >^ DajDroge18();
	array< Auto^ >^ DajDroge19();


public:
	Random^ rnd;
	int natezenie = 4;
	int losowosc = 20;

	array<int>^ ilosc;
	array<int>^ srczas;

	array< Auto^ >^ Droga1;
	array< Auto^ >^ Droga2;
	array< Auto^ >^ Droga3;
	array< Auto^ >^ Droga4;
	array< Auto^ >^ Droga5;
	array< Auto^ >^ Droga6;
	array< Auto^ >^ Droga7;
	array< Auto^ >^ Droga8;
	array< Auto^ >^ Droga9;
	array< Auto^ >^ Droga10;
	array< Auto^ >^ Droga11;
	array< Auto^ >^ Droga12;
	array< Auto^ >^ Droga13;
	array< Auto^ >^ Droga14;
	array< Auto^ >^ Droga15;
	array< Auto^ >^ Droga16;
	array< Auto^ >^ Droga17;
	array< Auto^ >^ Droga18;
	array< Auto^ >^ Droga19;
};