
all: x.out

x.out: lex.yy.o y.tab.o ass6_14CS10062_translator.o ass6_14CS10062_target_translator.o libass2_14CS10062.a
	g++ lex.yy.o y.tab.o ass6_14CS10062_translator.o  ass6_14CS10062_target_translator.o -lfl -o x.out
	./x.out 1  < ass6_14CS10062_test1.c >ass6_14CS10062_quads1.out
	./x.out 2  < ass6_14CS10062_test2.c >ass6_14CS10062_quads2.out
	./x.out 3  < ass6_14CS10062_test3.c >ass6_14CS10062_quads3.out
	./x.out 4  < ass6_14CS10062_test4.c >ass6_14CS10062_quads4.out
	./x.out 5  < ass6_14CS10062_test5.c >ass6_14CS10062_quads5.out
	
y.tab.o:	y.tab.c
	g++ -c y.tab.c

lex.yy.o:	lex.yy.c
	g++ -c lex.yy.c

lex.yy.c:	ass6_14CS10062.l y.tab.c
	flex ass6_14CS10062.l

y.tab.c:	ass6_14CS10062.y
	yacc -dtv ass6_14CS10062.y

ass6_14CS10062_translator.o: ass6_14CS10062_translator.h ass6_14CS10062_translator.cxx
	g++ -c ass6_14CS10062_translator.cxx

ass6_14CS10062_target_translator.o: ass6_14CS10062_target_translator.cxx
	g++ -c ass6_14CS10062_target_translator.cxx 
%.c: %.y
%.c: %.l

libass2_14CS10062.a:	ass2_14CS10062.o
		ar -rcs libass2_14CS10062.a ass2_14CS10062.o

ass2_14CS10062.o:	ass2_14CS10062.c myl.h
	gcc -g -Wall  -c ass2_14CS10062.c

clean:
	rm x.out y.tab.o lex.yy.o lex.yy.c y.tab.c y.tab.h y.output ass6_14CS10062_translator.o ass6_14CS10062_target_translator.o

