CC = gcc
CFLAGS = -g -lm -O0
PROGS = ejercicio2 ejercicio3 ejercicio4

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) -o $@ $<

 clean :
	rm -f $(PROGS) *.o
	rm -rf *.dSYM
