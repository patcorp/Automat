#builden des Programms Getränkeautomat

automaten: automaten.o
	gcc -o automaten automaten.o
	echo finished linking

automaten.o: automaten.c
	gcc -c -g -O0 -Wall automaten.c
	echo compiler returned

clean: 
	rm -r *.o
	echo cleaned
