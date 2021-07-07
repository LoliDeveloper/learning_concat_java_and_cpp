# Makefile for learning_concat_java_and_cpp

main: main.o myclock.o
	gcc -o main.out main.o myclock.o
main.o: main.c
	gcc -c main.c
myclock.o: myclock.c
	gcc -c myclock.c

clear:
	rm *.o
	rm *.out
