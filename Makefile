# mingw32-make
COMPILER = gcc
SIZE_VECTOR = 10

compile: main.c
	$(COMPILER) -o main.exe main.c

run: main.exe
	./main.exe $(SIZE_VECTOR)

delete: main.exe
	del main.exe

compile_run: main.c
	$(COMPILER) -o main.exe main.c
	./main.exe $(SIZE_VECTOR)
	del main.exe
