TARGET = parser
OBJECT = lex.yy.c y.tab.c y.tab.h y.output 

all: $(TARGET)

$(TARGET): lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -o $(TARGET) –ly –ll

y.tab.c: yacctemplate.y
	yacc -d -v yacctemplate.y

lex.yy.c: lextemplate.l
	lex lextemplate.l

clean:
	rm -f $(TARGET) $(OBJECT)
