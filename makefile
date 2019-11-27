all: strsepArgs.o
	gcc -o program strsepArgs.o

strsepArgs.o: strsepArgs.c
	gcc -c strsepArgs.c

run:
	./program

clean:
	rm *.o
	rm program.exe
	rm *~
