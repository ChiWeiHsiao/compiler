TARGET = scanner
OBJECT = lex.yy.c 
CC = gcc
LEX = lex
LIBS = -lfl

all: lex.yy.c
	$(CC) -o $(TARGET) lex.yy.c $(LIBS)

lex.yy.c: lextemplate.l
	$(LEX) lextemplate.l

clean:
	rm -f $(TARGET) $(OBJECT)

