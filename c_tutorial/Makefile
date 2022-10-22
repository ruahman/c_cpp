CC = clang
CFLAGS = -c -Wall
DFLAGS = -g
EXE = c_tutorial
LIBS = -l m
OBJS = variables.o arrays.o functions.o conditions.o struct.o loops.o pointers.o files.o main.o

all: build run

build: $(EXE)

$(EXE): $(OBJS) 
	$(CC) $(DFLAGS) $(LIBS) $(OBJS) -o $(EXE)

main.o: main.c
	$(CC) $(DFLAGS) $(CFLAGS) main.c

variables.o: variables.c
	$(CC) $(DFLAGS) $(CFLAGS) variables.c

arrays.o: arrays.c
	$(CC) $(DFLAGS) $(CFLAGS) arrays.c

functions.o: functions.c
	$(CC) $(DFLAGS) $(CFLAGS) functions.c

conditions.o: conditions.c
	$(CC) $(DFLAGS) $(CFLAGS) conditions.c

struct.o: struct.c
	$(CC) $(DFLAGS) $(CFLAGS) struct.c

loops.o: loops.c
	$(CC) $(DFLAGS) $(CFLAGS) loops.c

pointers.o: pointers.c
	$(CC) $(DFLAGS) $(CFLAGS) pointers.c

files.o: files.c
	$(CC) $(DFLAGS) $(CFLAGS) files.c

clean:
	rm -f $(EXE)
	rm -f *.o
	rm -f *.out

run:
	./$(EXE)

# not linked to an output file
.PHONY: clean build run



