INCLUDE_DIR := ./inc
SRC_PATH := ./src
CFLAG = -I${INCLUDE_DIR} -Wall -O2
CC = /usr/bin/gcc
LDLIBS = -lm -lpthread -lxenctrl

vpath %.c ${SRC_PATH}

.PHONY: all clean
ALL = main

all: ${ALL}
	cscope -Rb

clean:
	rm -rf ${ALL} *.o 
	clear

%.o: %.c
	${CC} ${CFLAG} -c $^ -o $@

main: main.o
	${CC} ${CFLAG} $^ ${LDLIBS} -o $@

