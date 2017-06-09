CC = gcc
CFLAGS = -Wall -Wshadow -pedantic -std=gnu99
#CFLAGS = -Werror
DEBUG = -g
TARGETS = chess

all:
	$(CC) $(CFLAGS) -o chess chess.c

