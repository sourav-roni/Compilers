a.out: y.tab.o lex.yy.o ass4_14CS10062.o
	gcc lex.yy.o y.tab.o ass4_14CS10062.o -lfl

lex.yy.o: lex.yy.c
	gcc -DYYDEBUG -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: ass4_14CS10062.l
	flex ass4_14CS10062.l

y.tab.c: ass4_14CS10062.y
	yacc -dtv ass4_14CS10062.y

ass4_14CS10062.o: ass4_14CS10062.c
	gcc -c ass4_14CS10062.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass4_14CS10062.o lex.yy.o y.tab.o

test: 
	./a.out<ass4_14CS10062_test.c

