
/** @file */

//#include "stdafx.h"
//#include "../../../memory-leaks/debug_new.h"

#include "struktury.h"
#include "pobierz.h"
#include "usun.h"
#include "wynik.h"
#include "przelaczniki.h"

int main(int ile, char ** argumenty) 
{
	// wszystkie pliki wejsciowe i wyjsciowe przechowuje w folderze dat
	// PRZYKLADOWE WYWOLANIE PROGRAMU: 
	//	loty.exe -i ..\dat\rezerwacje.txt
	string wejscie = "";
	bool poprawnedane = true;
	
	if (Odczytajargumenty(ile, argumenty, wejscie))
	{
		if (!wejscie.empty())
		{
			Sprawdzplik(wejscie, poprawnedane);
			if (poprawnedane)
			{
				loty * lot = 0;
				// pobieramy loty i pasazerow z pliku
				if (pobieranieDanych(wejscie, lot))
				{
					// wszystkie loty wraz z ich pasazerami zapisujemy na osobnych plikach:
					Wynik(lot);
				}
				// usuwamy wszystko we wszystkich listach zeby nie bylo wyciekow 
				usunWszystko(lot);
			}
			else
			{
				cout << " Niepoprawne dane w pliku wejsciowym. " << endl;
				Pomoc();
			}
		}
		else
		{
			cout << "Nie podano nazwy pliku wejscia.";
		}
	}
	else
	{
		cout << "Niepoprawne wywolanie programu.";
		Pomoc();
	}
	return 0;
}

