INCLUDE_DIR := ./inc
SRC_PATH := ./src
CFLAG = -I${INCLUDE_DIR} -Wall -O2
CC = /usr/bin/gcc
LDLIBS = -lm -lpthread -lxenctrl

vpath %.c ${SRC_PATH}

.PHONY: all clean
ALL = xen_ver xen_rtds_boost

all: ${ALL}
	cscope -Rb

clean:
	rm -rf ${ALL} *.o 
	clear

%.o: %.c
	${CC} ${CFLAG} -c $^ -o $@

xen_ver: xen_ver.o
	${CC} ${CFLAG} $^ ${LDLIBS} -o $@

xen_rtds_boost: xen_rtds_boost.o
	${CC} ${CFLAG} $^ ${LDLIBS} -o $@

