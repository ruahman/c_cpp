CC=gcc
FLAGS=-c -Wall
OBJ=test.dll


build: main.c
	$(CC) -shared main.c -o $(OBJ)

# main.o: main.c 
# 	$(CC) $(FLAGS) main.c 

# hello_world.o: hello_world.c
# 	$(CC) $(FLAGS) hello_world.c 

# run: $(OBJ)
# 	./$(OBJ)

clean:
	del *.o
	del *.EXE
	del *.dll

.PHONY: run clean