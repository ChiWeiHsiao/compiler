all:
	yacc -d -v parser.y
	lex scanner.l
	gcc -o parser lex.yy.c y.tab.c -ly -lfl

clean:
	rm -f parser lex.yy.c y.tab.c y.tab.h y.output
