/** @file */

#ifndef struktury_h 
#define struktury_h   

//#include "stdafx.h"
//#include "../../../memory-leaks/debug_new.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// jednokierunkowa lista pasazerow
struct osoba 
{
	string nazwisko;
	int miejsce;
	osoba * pNext;
};

// jednokierunkowa lista lotow z wskaznikami na listy pasazerow
struct loty
{
	string symbollotu;
	string miasto;
	string data;
	osoba * pPasazerowie;
	loty * pNext;
};

#endif