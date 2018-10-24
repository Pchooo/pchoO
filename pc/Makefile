all: menu

clear:
	rm menu *.o

menu.o: menu.c
	gcc -c -o menu.o menu.c

indexFN.o: index_first_negative.c
	gcc -c -o indexFN.o index_first_negative.c

indexLN.o: index_last_negative.c
	gcc -c -o indexLN.o index_last_negative.c

multiBAAN.o: multi_before_and_after_negative.c indexFN.o indexLN.o
	gcc -c -o multiBAAN.o multi_before_and_after_negative.c

multiBN.o: multi_between_negative.c indexFN.o indexLN.o
	gcc -c -o multiBN.o multi_between_negative.c
 
menu: menu.o indexFN.o indexLN.o multiBAAN.o multiBN.o
	gcc -o menu menu.o indexFN.o indexLN.o multiBAAN.o multiBN.o
