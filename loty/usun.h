/** @file */

#ifndef usun_h
#define usun_h   

//#include "stdafx.h"
//#include "../../../memory-leaks/debug_new.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "struktury.h"

using namespace std;

// funkcje ponizej uzywane aby sie pozbyc wyciekow pamieci

// usuwa pasazerow z listy jednokierunkowej
void usunListe(osoba *& pHead);

// usuwa cala liste lotow
void usunWszystko(loty *& pHead);


#endif
