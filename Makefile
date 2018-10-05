run:prog
	./prog
prog:prog.c
	gcc -lm prog.c -o prog
build:prog
