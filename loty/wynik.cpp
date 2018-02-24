/** @file */

#include"wynik.h"

using namespace std;

void zapiszOsobe(osoba * pHead, ofstream & plik) // wyswietla liste osob
{

	if (pHead)
	{
		auto p = pHead;
		while (p)
		{
			plik << endl << setw(3);
			plik << p->miejsce << " ";
			plik << p->nazwisko << setw(5);
			p = p->pNext;
		}
	}
}

int liczbaPasazerow(osoba * pHead) // zwraca ilosc pasazerow
{
	int liczba = 0;
	if (pHead)
	{
		liczba = liczbaPasazerow(pHead->pNext) + 1;
	}
	return liczba;
}
void Wynik(loty * pHead)
{
	if (pHead)
	{
		auto p = pHead;
		while (p)
		{
			string wyjscie = "../dat/" + p->symbollotu + ".txt";
			ofstream plik(wyjscie);
			plik << endl;
			plik << " symbol lotu:    " << p->symbollotu << endl;
			plik << " lotnisko:       " << p->miasto << endl;
			plik << " data lotu:      " << p->data << endl;
			plik << endl << " lista pasazerow: ";
			zapiszOsobe(p->pPasazerowie, plik);
			plik << endl << endl << " liczba rezerwacji: " << liczbaPasazerow(p->pPasazerowie);
			p = p->pNext;
			plik.close();
		}
	}

}