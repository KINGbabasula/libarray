lib=libarray
CC?=gcc
AR?=ar
OPT=-O2 ${CFLAGS}
OBJ=libarray.o

.PHONY: build
.PHONY: clean

build: ${lib}

clean:
	rm -f *.o *.a

${lib}: ${OBJ}
	$(AR) ruv libarray.a ${OBJ}

libarray.o: libarray.c
	$(CC) -c ${OPT} $<
