CC := g++
CFLAGS := -Wall -Wextra -std=c++11 # without debug
TARGET := ./bin/main

all: run

src/main.lex.yy.c: src/main.lex
	flex --noyywrap -o src/main.lex.yy.cpp  src/main.lex 

src/main.tab.c: src/main.y
	bison -o src/main.tab.cpp --defines=src/main.tab.h -v src/main.y

src/pch.h.gch: src/pch.h
	g++ -x c++-header -o src/pch.h.gch -c src/pch.h

lex: src/main.lex.yy.c

yacc: src/main.tab.c

main: src/pch.h.gch
	$(CC) $(CFLAGS) $(shell ls ./src/*.cpp) -o ./bin/main

.PHONY: all clean main run lex yacc test debug link testscope asm nasm example-code out

run: lex yacc main

clean:
	rm -f src/*.output src/main.lex.yy.cpp src/main.tab.cpp src/main.tab.h src/main.output src/pch.h.gch $(TARGET) *.o ./bin/* 

test: 
	# ./bin/main tests/type_check.c > type_check.s
	./bin/main tests/test.c > result_test.s
	# ./bin/main tests/example.c > result_example.s
	# ./bin/main tests/0.c > result_0.s
	# ./bin/main tests/1.c > result_1.s
	# ./bin/main tests/2.c > result_2.s
	# ./bin/main tests/3.c > result_3.s

try:
	gcc result_test.s -m32 -o main.out
	qemu-i386 main.out