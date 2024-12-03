TARGETS = enigma

CFLAGS = -Wall -g -pedantic -Wextra -O2

enigma: main.cpp
	g++ $(CFLAGS) -o $@ $^


clean:
	rm -f *.o $(TARGETS)

run: all
	./enigma /data.csv

all: $(TARGETS)

.DEFAULT_GOAL := all