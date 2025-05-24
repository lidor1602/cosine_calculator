CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src
OBJ = obj

OBJS = src/main.o src/My_cos.o src/Factorial.o src/cos_function.o

all: cosine_calculator

cosine_calculator: $(OBJS)
	$(CC) $(CFLAGS) -o cosine_calculator $(OBJS) -lm

clean:
	rm -f src/*.o cosine_calculator
