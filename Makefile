CC=gcc
CFLAGS=-Wall
SOURCES=src/main.c
TARGET=bin/crc

default: all

all: build

build:
	@if [ ! -d bin ]; then \
		mkdir bin; \
	fi
	$(CC) -o $(TARGET) $(SOURCES) $(CFLAGS);

clean:
	rm -v $(TARGET)
	