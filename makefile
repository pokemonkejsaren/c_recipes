all: pizza ciabatta kvass

pizza:
	gcc -Wall -o pizza pizza.c

ciabatta:
	gcc -Wall -o ciabatta ciabatta.c

kvass:
	gcc -Wall -o kvass kvass.c
