CC = clang
INCDIRS = . ./includes/
CODEDIRS = . lib
OPT = -O0
# generate files that encode make rules for the .h dependencies
DEPFLAGS = -MP -MD
# automatically add the -I onto each include directory
CFLAGS = -Wall -g $(foreach D, $(INCDIRS), -I$(D)) $(DEPFLAGS) $(OPT)
# libaries that out app uses
LIBS = -l m
# get each *.c from CODEDIRS
CFILES = $(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c))
# create obj files from CFILES
OBJS = $(patsubst %.c, %.o, $(CFILES))
# create .d files from CFILES
DEPFILES = $(patsubst %.c, %.d, $(CFILES)) 
# executablle we are creating
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
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(EXE) $(OBJS) $(DEPFILES)

run:
	./$(EXE)

# not linked to an output file
.PHONY: clean build run

# include dependencies
-include $(DEPFILES)

