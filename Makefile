CC=gcc
CFLAGS=-Wall
SOURCES=src/main.c
TARGET=bin/crc
DESTDIR=/usr/local/bin

default: all

all: build

build:
	@if [ ! -d bin ]; then \
		mkdir bin; \
	fi
	$(CC) -o $(TARGET) $(SOURCES) $(CFLAGS);

clean:
	rm -v $(TARGET)

install:
	install bin/crc $(DESTDIR)

uninstall:
	rm -v $(DESTDIR)/crc
	