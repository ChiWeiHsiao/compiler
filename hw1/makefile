TARGET = scanner
OBJECT = lex.yy.c 
CC = gcc
LIBS = -lfl

all: lex.yy.c
	$(CC) -o $(TARGET) lex.yy.c $(LIBS)

lex.yy.c: lextemplate.l
	lex scanner.l

clean:
	rm -f $(TARGET) $(OBJECT)

