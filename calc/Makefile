CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -L. -lcalc -lm

TARGET = calculator
LIB = libcalc.a
OBJ_MAIN = main.o
OBJ_LIB = add.o subtract.o multiply.o divide.o factorial.o square_root.o

$(TARGET): $(OBJ_MAIN) $(LIB)
        $(CC) $(CFLAGS) $(OBJ_MAIN) $(LDFLAGS) -o $(TARGET)

$(OBJ_MAIN): main.c calc.h
        $(CC) $(CFLAGS) -c main.c -o $(OBJ_MAIN)

$(LIB): $(OBJ_LIB)
        ar rcs $(LIB) $(OBJ_LIB)

add.o: add.c calc.h
        $(CC) $(CFLAGS) -c add.c -o add.o

subtract.o: subtract.c calc.h
        $(CC) $(CFLAGS) -c subtract.c -o subtract.o

multiply.o: multiply.c calc.h
        $(CC) $(CFLAGS) -c multiply.c -o multiply.o

divide.o: divide.c calc.h
        $(CC) $(CFLAGS) -c divide.c -o divide.o

factorial.o: factorial.c calc.h
        $(CC) $(CFLAGS) -c factorial.c -o factorial.o

square_root.o: square_root.c calc.h
        $(CC) $(CFLAGS) -c square_root.c -o square_root.o

clean:
        rm -f $(TARGET) $(LIB) $(OBJ_MAIN) $(OBJ_LIB)
