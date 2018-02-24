/** @file */
#include"usun.h"

using namespace std;

void usunListe(osoba *& pHead)
{
	while (pHead)
	{
		auto p = pHead;
		pHead = pHead->pNext;
		delete p;
	}
}

void usunWszystko(loty *& pHead)
{
	while (pHead)
	{
		usunListe(pHead->pPasazerowie);
		auto p = pHead;
		pHead = pHead->pNext;
		delete p;
	}
}