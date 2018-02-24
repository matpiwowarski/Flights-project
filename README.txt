Treœæ zadania:
Korzystaj¹c z dynamicznych struktur danych napisaæ program, który
przygotowuje listy pasa¿erów. Pasa¿erowie mog¹ rezerwowaæ bilety na ró¿ne
loty w ró¿nych biurach i przez internet. Wszystkie rezerwacje s¹ zapisywane
w biurze centralnym. Maj¹ one nastepuj¹c¹ postaæ:
(symbol lotu) (lotnisko startowe) (data lotu) (nazwisko pasazera) (nr miejsca)
Przyk³adowy plik z rezerwacjami:
KR54R Katowice 2011-12-13 Jaworek 33
TY340 London 2012-02-03 Hastings 2
TY340 London 2012-02-03 Poirot 23
KR54R Katowice 2011-12-13 Matianek 02
TY340 London 2012-02-03 Holmes 11
KR54R Katowice 2011-12-13 Lopez 12
TY340 London 2012-02-03 Lemon 43
KR54R Katowice 2011-12-13 Chavez 43

Na podstawie pliku z rezerwacjami nale¿y stworzyæ plik z list¹ pasa¿erów
dla ka¿dego lotu. Ka¿da lista jest tworzona w odrêbnym pliku. Nazw¹ pliku
jest symbol lotu. W pliku umieszczona jest nazwa lotniska i data. W kolejnych
liniach umieszczone sa numery siedzeñ i nazwiska pasa¿erów, posortowane
wg numerów.Dla powy¿szego pliku zostan¹ utworzone pliki: KR54R.txt
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
Program uruchamiany jest z linii poleceñ z wykorzystaniem nastêpuj¹cego
prze³¹cznika: -i plik wejsciowy z rezerwacjami.