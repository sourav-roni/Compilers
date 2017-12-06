all: a.out

a.out: lex.yy.o y.tab.o ass5_14CS10062_translator.o 
	g++ lex.yy.o y.tab.o ass5_14CS10062_translator.o -lfl
	./a.out<ass5_14CS10062_test1.c >ass5_14CS10062_quads1.out
	./a.out<ass5_14CS10062_test2.c >ass5_14CS10062_quads2.out
	./a.out<ass5_14CS10062_test3.c >ass5_14CS10062_quads3.out
	./a.out<ass5_14CS10062_test4.c >ass5_14CS10062_quads4.out
	./a.out<ass5_14CS10062_test5.c >ass5_14CS10062_quads5.out

	 

y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass5_14CS10062.l y.tab.c
	flex ass5_14CS10062.l

y.tab.c:	ass5_14CS10062.y
	yacc -dtv ass5_14CS10062.y

ass5_14CS10062_translator.o: ass5_14CS10062_translator.h ass5_14CS10062_translator.cxx
	g++ -c ass5_14CS10062_translator.cxx

%.c: %.y
%.c: %.l

clean:
	rm a.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass5_14CS10062_translator.o

