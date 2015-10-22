FLEX_FILE=main.l

a.out: lex.yy.c
	gcc -lfl lex.yy.c

lex.yy.c: $(FLEX_FILE)
	flex $^

run: a.out
	./a.out < tmp

clean:
	rm -f *.out *.c
