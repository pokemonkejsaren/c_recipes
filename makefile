CC = gcc
CFLAGS = -O3 -Wall

# O_* for object
O_pizza = pizza.o
O_ciabatta = ciabatta.o
O_kvass = kvass.o
O_noknead_ciabatta = noknead_ciabatta.o
O_noknead_baguette = noknead_baguette.o

# P_* for program
P_pizza = pizza
P_ciabatta = ciabatta
P_kvass = kvass
P_noknead_ciabatta = noknead_ciabatta
P_noknead_baguette = noknead_baguette

all: $(P_pizza) $(P_ciabatta) $(P_kvass) $(P_noknead_ciabatta) $(P_noknead_baguette) clean

$(P_pizza): $(O_pizza)
	$(CC) -o $@ $^ $(CFLAGS)

$(P_ciabatta): $(O_ciabatta)
	$(CC) -o $@ $^ $(CFLAGS)

$(P_kvass): $(O_kvass)
	$(CC) -o $@ $^ $(CFLAGS)

$(P_noknead_ciabatta): $(O_noknead_ciabatta)
	$(CC) -o $@ $^ $(CFLAGS)

$(P_noknead_baguette): $(O_noknead_baguette)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
	touch *.c
