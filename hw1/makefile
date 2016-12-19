TARGET = scanner
OBJECT = lex.yy.c 
CC = gcc
LIBS = -ll

all: lex.yy.c
	$(CC) -o $(TARGET) lex.yy.c $(LIBS)

lex.yy.c: scanner.l
	lex scanner.l

clean:
	rm -f $(TARGET) $(OBJECT)

