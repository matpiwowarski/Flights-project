/** @file */

#ifndef przelaczniki_h
#define przelaczniki_h

//#include "stdafx.h"
//#include "../../../memory-leaks/debug_new.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "struktury.h"

using namespace std;

// Wyswietlana jest instrukcja programu po przelaczniku '-h' lub po bledzie
void Pomoc();
// Sprawdza przelaczniki podane przez uzytkownika oraz pobiera nazwe pliku wejscia
bool Odczytajargumenty(int ile, char ** argumenty, string & szInput);
// sprawdza czy symbol w pliku wejscia jest zapisany poprawnie 
void Sprawdzsymbol(const string & linia, bool & poprawnedane, int & i);
// sprawdza czy data w pliku wejscia jest zapisana poprawnie 
void Sprawdzdate(const string & linia, bool & poprawnedane, int & i);
// sprawdza czy nazwisko w pliku wejscia jest zapisane poprawnie
void Sprawdznazwisko(const string & linia, bool & poprawnedane, int & i);
// sprawdza czy miejsce pasazera w pliku wejscia jest zapisane poprawnie
void Sprawdzmiejsce(const string & linia, bool & poprawnedane, int & i);

// sprawdza czy linia w pliku jest zapisana poprawnie
void Sprawdzlinie(const string & linia, bool & poprawnedane);
// sprawdza czy plik posiada prawidlowe dane
bool Sprawdzplik(const string & wejscie, bool & poprawnedane);



#endif
