SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
DEPENDENCIES = $(SOURCES:.c=.d)
TARGETS = $(SOURCES:.c=)

CC=gcc
CFLAGS=-Wall -g -MMD

all: $(TARGETS)

# create all targets
# $@ is the target 
# $< is the first dependency 
# $^ is all the dependencies
$(TARGETS): % : %.o 
	$(CC) $< -o $@

# create object files
# $@ is the target 
# $< is the first dependency 
# $^ is all the dependencies
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Include the dependency files that GCC generated for each source file
# that way we can rebuild the object files if the header file changes
-include $(DEPENDENCIES)

# Clean up generated files
clean:
	rm -f $(TARGETS) $(OBJECTS) $(DEPENDENCIES)

# PHONY targets to prevent conflict with files named 'clean' or 'all'
.PHONY: all clean

