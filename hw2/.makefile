TARGET = parser
OBJECT = lex.yy.c y.tab.c y.tab.h y.output 

all: $(TARGET)

$(TARGET): y.tab.c lex.yy.c
	gcc lex.yy.c y.tab.c -o $(TARGET) -ly –lfl

y.tab.c: yacctemplate.y
	yacc -d -v yacctemplate.y

lex.yy.c: lextemplate.l
	lex lextemplate.l

clean:
	rm -f $(TARGET) $(OBJECT)
