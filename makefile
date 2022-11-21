#makefile for BBf
#Created by Camdendev on 11/20/2022

SRCS = bbf.c
EXE = better-bf
CFLAGS = -Wall
LDFLAGS =
LIBS =
LD = clang
OBJS = $(SRCS:%.c%=%.o)

default: all

all:$(EXE)

$(EXE): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(EXE) $(LIBS)
	
clean:
	-rm -f $(EXE)
	-rm -f $(OBJS)
	
bbf.o: bbf.c bbf.h