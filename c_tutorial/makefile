CC = clang
CFLAGS = -c -Wall
OBJ = main

build: $(OBJ)

$(OBJ): variables.o main.o 
	$(CC) variables.o main.o -o $(OBJ)

main.o: main.c
	$(CC) $(CFLAGS) main.c

variables.o: variables.c
	$(CC) $(CFLAGS) variables.c

# arrays.o: arrays.cpp
#         $(CC) $(CFLAGS) arrays.cpp

# functions.o: functions.cpp
#         $(CC) $(CFLAGS) functions.cpp

# conditions.o: conditions.cpp
#         $(CC) $(CFLAGS) conditions.cpp

# loops.o: loops.cpp
#         $(CC) $(CFLAGS) loops.cpp

# pointer.o: pointer.cpp
#         $(CC) $(CFLAGS) pointer.cpp

# classes.o: classes.cpp
#         $(CC) $(CFLAGS) classes.cpp

clean:
	# -rm ignores errors and wornings
	-rm main
	-rm *.o
	-rm *.out

run:
	./$(OBJ)

.PHONY: clean build
