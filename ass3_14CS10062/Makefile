all: a.out

a.out: lex.yy.c y.tab.c ass3_14CS10062.o
	g++ lex.yy.c y.tab.c ass3_14CS10062.o -lfl

lex.yy.c: ass3_14CS10062.l
	flex ass3_14CS10062.l

y.tab.c: ass3_14CS10062.y
	yacc -dtv ass3_14CS10062.y

ass3_14CS10062.o: ass3_14CS10062.c
	g++ -c ass3_14CS10062.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass3_14CS10062.o
