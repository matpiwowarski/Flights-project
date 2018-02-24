/** @file */

#ifndef wynik_h
#define wynik_h  

//#include "stdafx.h"
// //#include "../../../memory-leaks/debug_new.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "struktury.h"

using namespace std;

// funkcja zapisujaca liste pasazerow 
void zapiszOsobe(osoba * pHead, ofstream & plik);

// funkcja zwracajaca ilosc pasazerow w liscie jednokierunkowej
int liczbaPasazerow(osoba * pHead);

// funkcja zapisujaca wynik do plikow (kazdy lot ma osobny plik // kazdy lot ma swoja liste pasazerow)
void Wynik(loty * pHead);

#endif

