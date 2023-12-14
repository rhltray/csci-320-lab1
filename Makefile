CC=gcc

explode: main.o lab1.o
	$(CC) -o explode main.o lab1.o -lm

main.o: main.c lab1.h
	$(CC) -c main.c

lab1.o: lab1.c lab1.h
	$(CC) -c lab1.c

clean:
	rm explode lab1.o main.o
