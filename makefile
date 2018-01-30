CC = gcc
CFLAGS = -O3 -Wall

OBJECT_pizza = pizza.o
OBJECT_ciabatta = ciabatta.o
OBJECT_kvass = kvass.o
OBJECT_noknead_ciabatta = noknead_ciabatta.o

PROGRAM_pizza = pizza
PROGRAM_ciabatta = ciabatta
PROGRAM_kvass = kvass
PROGRAM_noknead_ciabatta = noknead_ciabatta


all: $(PROGRAM_pizza) $(PROGRAM_ciabatta) $(PROGRAM_kvass) $(PROGRAM_noknead_ciabatta) clean

$(PROGRAM_pizza): $(OBJECT_pizza)
	$(CC) -o $@ $^ $(CFLAGS)

$(PROGRAM_ciabatta): $(OBJECT_ciabatta)
	$(CC) -o $@ $^ $(CFLAGS)

$(PROGRAM_kvass): $(OBJECT_kvass)
	$(CC) -o $@ $^ $(CFLAGS)

$(PROGRAM_noknead_ciabatta): $(OBJECT_noknead_ciabatta)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
	touch *.c
