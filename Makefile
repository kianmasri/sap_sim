CC= clang++
CFLAGS= -c -std=c++17 -Wall
OBJECTS= main.o

all: program clean

program: $(OBJECTS)
	$(CC) main.o -o sap_sim

main.o:
	$(CC) $(CFLAGS) ./src/main.cpp

clean:
	rm -rf *.o