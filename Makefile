all: linkedlist.o main.o
	gcc -o linkedlist.out linkedlist.o main.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

clean:
	rm -f *.o *.out linkedlist
run:
	./linkedlist.out
