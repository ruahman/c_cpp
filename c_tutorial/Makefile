CC = clang
INCDIRS = . ./includes/
CODEDIRS = . lib
DEPFLAGS = -MP -MD
CFLAGS = $(foreach D, $(INCDIRS), -I$(D)) $(DEPFLAGS) -c -Wall -g 
LIBS = -l m
# CFILES = varibles.c arrays.c functions.c conditions.c struct.c loops.c pointers.c files.c main.c
CFILES = $(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c))
# OBJS = variables.o arrays.o functions.o conditions.o struct.o loops.o pointers.o files.o main.o
OBJS = $(patsubst %.c, %.o, $(CFILES))

# if a .d file is changes then so is .c file
# tells make to check the .d file with the .c file
DEPFILES = $(patsubst %.c, %.d, $(CFILES)) 
EXE = c_tutorial

all: build run

build: $(EXE)

# exectutable
# @:target, ^:dependency
$(EXE): $(OBJS) 
	$(CC) $(LIBS) $^ -o $@

# object files
# @:target, <:dependency just the .c
%.o:%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXE) $(OBJS) $(DEPFILES)

run:
	./$(EXE)

# not linked to an output file
.PHONY: clean build run



