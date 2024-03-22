CC=clang
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o tools.o
	$(CC) $(CFLAGS) main.o tools.o -o mainapp

%.o: %.c
	$(CC) $(CFLAGS) -c $^ # builds object file from .c source files.

# tools.o: tools.o
# 	$(CC) $(CFLAGS) -c tools.c

clean:
	rm *.o mainapp
