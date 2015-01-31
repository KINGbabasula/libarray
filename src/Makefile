lib=libarray
CC?=gcc
AR?=ar
OPT=-O2
OBJ=libarray.o sort.o io.o

.PHONY: build
.PHONY: clean

build: ${lib}

clean:
	rm -f *.o *.a

${lib}: ${OBJ}
	$(AR) ruv libarray.a ${OBJ}

libarray.o: libarray.c
	$(CC) -c ${OPT} $<

sort.o: sort.c
	$(CC) -c ${OPT} $<

io.o: io.c
	$(CC) -c ${OPT} $<