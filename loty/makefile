 
kompilator=g++
standard=-std=c++14
optymalizacja=-O3
# optymalizacja=
# debug=-g
debug=
mem=../../../memory-leaks


__ : main
#	./main									#bez przelacznikow   
	./main -i ../dat/rezerwacje.txt						#przyklad dzialania
	
	#	nieprawidlowe dane:
	./main -i ../dat/zlysymbol.txt	
#	./main -i ../dat/zlemiasto.txt
#	./main -i ../dat/zladata.txt	
#	./main -i ../dat/zlenazwisko.txt
#	./main -i ../dat/zlemiejsce.txt	

#		z przelacznikami:				
#	./main -i ../dat/rezerwacje.txt	-h					# -i -h
#	./main -h -i ../dat/rezerwacje.txt					# -h -i
	# pomoc:
#	./main -i ../dat/rezerwacje.txt	-h					# -h

#	./main	-q  ../dat/rezerwacje.txt					# niepoprawny przelacznik
#	./main 	-i  ../dat/rezerwacje.txt 	-i ../dat/rezerwacje.txt	# wielokrotne wykorzystanie przelacznika	
#	./main 	-i								# bez podania nazwy pliku	
	   	   
main : debug_new.o static_mem_pool.o mem_pool_base.o bool_array.o static_mem_pool.o loty.o pobierz.o przelaczniki.o usun.o wynik.o
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors -o $@ $^ 
	
loty.o : loty.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
pobierz.o : pobierz.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
przelaczniki.o : przelaczniki.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
usun.o : usun.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
wynik.o : wynik.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
	
	            
debug_new.o : $(mem)/debug_new.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 
	
static_mem_pool.o : $(mem)/static_mem_pool.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 		

mem_pool_base.o : $(mem)/mem_pool_base.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 		

bool_array.o : $(mem)/bool_array.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors  -c -o $@ $^ 		

 	
	
clear :
	rm *.o
	rm main	
	
doxy : 
	doxygen Doxyfile 
