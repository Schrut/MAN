
EXE:=GIMENEZ_factorielle

all: clean $(EXE)

clean:
	rm -f $(EXE) && rm -f *.o

$(EXE): *.c
	gcc -Wall -o $(EXE) $(EXE).c -lm

run: all
	./$(EXE)
