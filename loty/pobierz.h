/** @file */

#ifndef pobierz_h 
#define pobierz_h   

//#include "stdafx.h"
//#include "../../../memory-leaks/debug_new.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "struktury.h"

using namespace std;

/* Dodajemy do lotu pasazera wg kolejnosci miejsc*/
void dodajPasazeraDoLotu(osoba *& pHead, const string & nazwisko, int miejsce);

// Jezeli lot o zadanych parametrach istnieje, to funkcja zwraca jego adres.
//Jezeli nie istnieje,  to dodanie lot na koniec listy i zwraca jego adres.

loty * znajdzLot(loty *& pHead, const string & symbol, const string &  miasto, const string & data);


// pobiera wszystkie dane z listy pasazerow i dzieli
bool pobieranieDanych(const string & wejscie, loty *& pHead);

#endif
