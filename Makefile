run:prog
	./prog
prog:prog.c
	gcc prog.c -lm -o prog
build:prog
