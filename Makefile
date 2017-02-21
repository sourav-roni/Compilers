a.out: 	main.o libmyl.a
	gcc main.o libmyl.a 

main.o: main.c myl.h
	gcc -Wall -c main.c

libmyl.a: ass2_14CS10062.o
	ar -rcs libmyl.a ass2_14CS10062.o

ass2_14CS10062.o: ass2_14CS10062.c myl.h
	gcc -Wall -c ass2_14CS10062.c 

clean:
	rm a.out main.o libmyl.a ass2_14CS10062.o
