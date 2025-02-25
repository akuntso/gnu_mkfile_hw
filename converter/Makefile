CC = gcc
CFLAGS = -fPIC
LDFLAGS = -ldl
LIB_DIR = /usr/local/lib
LIB_NAME = libconvert.so
OBJECTS = upper.o lower.o
EXECUTABLE_MAIN = converter
EXECUTABLES = $(EXECUTABLE_MAIN)

all: $(LIB_NAME) $(EXECUTABLES)

$(LIB_NAME): $(OBJECTS)
        $(CC) -shared -o $(LIB_NAME) $(OBJECTS)
        sudo mv $(LIB_NAME) $(LIB_DIR)
        sudo ldconfig

upper.o: upper.c
        $(CC) -c $(CFLAGS) upper.c -o upper.o

lower.o: lower.c
        $(CC) -c $(CFLAGS) lower.c -o lower.o

$(EXECUTABLE_MAIN): main.c $(LIB_NAME)
        $(CC) -o $(EXECUTABLE_MAIN) main.c $(LDFLAGS) -L$(LIB_DIR) -lconvert

clean:
        rm -f $(OBJECTS) $(LIB_NAME) $(EXECUTABLES)
