/** @file */

#include"pobierz.h"

/* Dodajemy do lotu pasazera wg kolejnosci miejsc*/
void dodajPasazeraDoLotu(osoba *& pHead, const string & nazwisko, int miejsce)
{ 
	// lista pusta
	if (pHead == nullptr)
	{
		pHead = new osoba{ nazwisko, miejsce, nullptr};
	}
	else
	{
		osoba *temp = pHead;
		if (miejsce < temp->miejsce) //jezeli pierwsze miejsce jest wieksze
		{
			osoba * t = new osoba{ nazwisko, miejsce, pHead };
			pHead = t;
		}

		else
		{
			// kiedy nastepny wskaznik nie jest nullptr, miejsce jest wieksze od nastepnego miejsca i mniejsze od obecnego
			// zatrzymujemy sie przed wiekszym miejscem
			while ((temp->pNext != nullptr) && !(miejsce < temp->pNext->miejsce && miejsce >= temp->miejsce))
				temp = temp->pNext;

			if (temp->pNext == nullptr) //miejsce idzie na koniec
			{
				temp->pNext = new osoba{nazwisko, miejsce, nullptr};
			}
			else // miejsce pomiedzy 2 miejscami
			{
				osoba * t = new osoba{ nazwisko, miejsce, temp->pNext};
				temp->pNext = t;
			}
		}

	}
}

loty * znajdzLot(loty *& pHead, const string & symbol, const string &  miasto, const string & data)
{
	if (!pHead) // gdy pusty lot
	{
		return pHead = new loty{ symbol, miasto, data, nullptr, nullptr };
	}
	else
	{
		if (pHead->symbollotu == symbol) // znaleziony lot
		{
			return pHead;
		}
		else
		{
			return znajdzLot(pHead->pNext, symbol, miasto, data);
		}
	}
}

bool pobieranieDanych(const string & wejscie, loty *& pHead)
{
	bool plikistnieje = false;
	if (!wejscie.empty())
	{
		ifstream plikwejscia(wejscie);

		if (plikwejscia)
		{
			plikistnieje = true;
			loty * szukanyLot = nullptr;
			ifstream plikwejscia(wejscie);
			while (!plikwejscia.eof())
			{
				string symbollotu = "";
				string miasto = "";
				string data = "";
				string nazwisko = "";
				int miejsce = 0;

				plikwejscia >> symbollotu;
				plikwejscia >> miasto;
				plikwejscia >> data;
				plikwejscia >> nazwisko;
				plikwejscia >> miejsce;

				szukanyLot = znajdzLot(pHead, symbollotu, miasto, data);
				dodajPasazeraDoLotu(szukanyLot->pPasazerowie, nazwisko, miejsce);
			}
			plikwejscia.close();
		}
	}
	return plikistnieje;
}