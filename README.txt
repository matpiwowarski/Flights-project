Tre�� zadania:
Korzystaj�c z dynamicznych struktur danych napisa� program, kt�ry
przygotowuje listy pasa�er�w. Pasa�erowie mog� rezerwowa� bilety na r�ne
loty w r�nych biurach i przez internet. Wszystkie rezerwacje s� zapisywane
w biurze centralnym. Maj� one nastepuj�c� posta�:
(symbol lotu) (lotnisko startowe) (data lotu) (nazwisko pasazera) (nr miejsca)
Przyk�adowy plik z rezerwacjami:
KR54R Katowice 2011-12-13 Jaworek 33
TY340 London 2012-02-03 Hastings 2
TY340 London 2012-02-03 Poirot 23
KR54R Katowice 2011-12-13 Matianek 02
TY340 London 2012-02-03 Holmes 11
KR54R Katowice 2011-12-13 Lopez 12
TY340 London 2012-02-03 Lemon 43
KR54R Katowice 2011-12-13 Chavez 43

Na podstawie pliku z rezerwacjami nale�y stworzy� plik z list� pasa�er�w
dla ka�dego lotu. Ka�da lista jest tworzona w odr�bnym pliku. Nazw� pliku
jest symbol lotu. W pliku umieszczona jest nazwa lotniska i data. W kolejnych
liniach umieszczone sa numery siedze� i nazwiska pasa�er�w, posortowane
wg numer�w.Dla powy�szego pliku zostan� utworzone pliki: KR54R.txt
i TY340.txt.
Plik KR54R.txt:
symbol lotu: KR54R
lotnisko: Katowice
data lotu: 2011-12-13
lista pasazerow:
02 Matianek
11 Lopez
33 Jaworek
43 Chavez
liczba rezerwacji: 4.
Program uruchamiany jest z linii polece� z wykorzystaniem nast�puj�cego
prze��cznika: -i plik wejsciowy z rezerwacjami.