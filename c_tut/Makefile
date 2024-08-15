
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
TARGETS = $(SOURCES:.c=)

CC=gcc
CFLAGS = -Wall

all: $(TARGETS)

$(TARGETS): $(OBJECTS)
	$(CC) $^ -o $@

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $^ -o $@

# Clean up generated files
clean:
	rm -f $(TARGETS) $(OBJECTS)

# PHONY targets to prevent conflict with files named 'clean' or 'all'
.PHONY: all clean

