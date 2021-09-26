main: euler.o main.o
	gcc -o main euler.o main.o -l m
euler.o: euler.c
	gcc -c euler.c
main.o: main.c euler.h
	gcc -c main.c
clean:
	rm -f *.o main