/** @file */

#include"przelaczniki.h"

using namespace std;

void Pomoc()
{
	cout << endl << " LOTY" << endl
		<< endl << " Program uruchamiamy z wiersza linii polecen." << endl
		<< endl << " Wywolujac program mozna dodatkowo zastosowac parametry -i -h."
		<< endl << " Kolejnosc parametrow nie ma znaczenia."
		<< endl << " Po parametrze -i nalezy wpisac nazwe pliku wejscia, z ktorego pobrane beda dane."
		<< endl << " Program zapisuje liste pasazerow dla kazdego lotu w osobnych plikach tekstowych nazwanych identyfikatorem lotu."
		<< endl << " Parametr -h wyswietla instrukcje korzystania z programu.";
}
bool Odczytajargumenty(int ile, char ** argumenty, string & szInput)
{

	bool poprawneetykiety = true;
	const string ETYKIETAINPUT("-i");
	const string ETYKIETAHELP("-h");
	// ile razy zostala wykorzystana etykieta. jezeli wiecej niz raz -> blad
	int uzytoh = 0;
	int uzytoi = 0;
		
	for (int i = 0; i < ile - 1; i++)
	{
		string arg(argumenty[i]);
		if (argumenty[i + 1] == ETYKIETAHELP) // -h
		{
			uzytoh++;
			Pomoc();
		}
		if (arg == ETYKIETAINPUT) // -i
		{
			uzytoi++;
			szInput = argumenty[i + 1];
		}
		if (arg[0] == '-' && arg[1] != 'h' && arg[1] != 'i')
			poprawneetykiety = false;
	}
	if (uzytoi > 1 || uzytoh > 1)
		poprawneetykiety = false;

	return poprawneetykiety;
	
}
void Sprawdzsymbol(const string & linia, bool & poprawnedane, int & i)
{
	while (linia[i] == ' ' || linia[i] == '	') // az napotkamy symbol 
		i++;
	for (int j = 0; j < 5 && poprawnedane != false; j++) // sprawdzanie symbolu
	{
		if ((linia[i + j] >= 'a') && (linia[i + j] <= 'z'))
		{
			poprawnedane = false;
		}
	}
	i = i + 5;
}

void Sprawdzmiasto(const string & linia, bool & poprawnedane, int & i)
{
	while (linia[i] == ' ' || linia[i] == '	') // az napotkamy miasto
		i++;
	while (linia[i] != ' ' && linia[i] != '	'&& poprawnedane == true) // sprawdzamy miasto
	{
		if (!(linia[i] >= 'a' && linia[i] <= 'z'))
			if (!(linia[i] >= 'A' && linia[i] <= 'Z'))
				poprawnedane = false;
		i++;
	}
}

void Sprawdzdate(const string & linia, bool & poprawnedane, int & i)
{
	while (linia[i] == ' ' || linia[i] == '	') // az napotkamy date
		i++;
	for (int j = 0; j < 10; j++) // sprawdzamy date
	{
		if (!(linia[i+j] >= '0' && linia[i+j] <= '9'))
			if(linia[i+j] != '-')
				poprawnedane = false;
	}
	i = i + 10;
}
void Sprawdznazwisko(const string & linia, bool & poprawnedane, int & i)
{
	while (linia[i] == ' ' || linia[i] == '	') // az napotkamy nazwisko
		i++;
	while (linia[i] != ' ' && linia[i] != '	'&& poprawnedane == true) // sprawdzamy nazwisko
	{
		if (!(linia[i] >= 'a' && linia[i] <= 'z'))
			if (!(linia[i] >= 'A' && linia[i] <= 'Z'))
				poprawnedane = false;
		i++;
	}
}

void Sprawdzmiejsce(const string & linia, bool & poprawnedane, int & i)
{
	while (linia[i] == ' ' || linia[i] == '	') // az napotkamy miejsce pasazera
		i++;
	for (int j = 0; j < 2; j++) // sprawdzamy miejsce pasazera
	{
		if (!(linia[i + j] >= '0' && linia[i + j] <= '9'))
			poprawnedane = false;
	}
	i = i + 2;

}

void Sprawdzlinie(const string & linia, bool & poprawnedane)
{
	if (!linia.empty())
	{
		int i = 0;
		// sprawdzanie poprawnosci linii w pliku
		Sprawdzsymbol(linia, poprawnedane, i);
		if(poprawnedane)
		{
			Sprawdzmiasto(linia, poprawnedane, i);
		}
		if (poprawnedane)
		{
			Sprawdzdate(linia, poprawnedane, i);
		}
		if (poprawnedane)
		{
			Sprawdznazwisko(linia, poprawnedane, i);
		}
		if (poprawnedane)
		{
			Sprawdzmiejsce(linia, poprawnedane, i);
		}

	}
}

bool Sprawdzplik(const string & wejscie, bool & poprawnedane)
{
	if (!wejscie.empty())
	{
		ifstream plikwejscia(wejscie);
		if (plikwejscia)
		{
			while (!plikwejscia.eof() && poprawnedane == true)
			{
				string linia;
				getline(plikwejscia, linia);
				Sprawdzlinie(linia, poprawnedane);
			}
		}
		plikwejscia.close();
	}
	else
	{
		return false;
	}

}
