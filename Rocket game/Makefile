CC=g++
STRIP=/usr/bin/strip
CFLAGS=-Wall
LDFLAGS+=-lsfml-window -lsfml-graphics -lsfml-system -lsfml-audio

all: game

game.o: game.cpp
	$(CC) -c $(CFLAGS) game.cpp
	
rocket.o: rocket.cpp rocket.h
	$(CC) -c $(LDFLAGS) rocket.cpp
	
background.o: background.cpp background.h
	$(CC) -c $(LDFLAGS) background.cpp

game: game.o rocket.o background.o
	$(CC) -o game game.o rocket.o background.o $(LDFLAGS)

.PHONY: clean

clean:
	rm -rf game *.o
