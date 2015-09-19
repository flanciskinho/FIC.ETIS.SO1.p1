CC = gcc
CFLAGS = -Wall -g -O0
PROGS = echo1 echo2 echo3 fahrenheit fahrenheit2 fahrenheit3 hello_world punteros
PROGS += statica malloc1 malloc2 encontrar

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) -o $@ $<

 clean :
	rm -f $(PROGS) *.o
	rm -rf *.dSYM
