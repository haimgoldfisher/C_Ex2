CC=gcc
AR=ar
FLAGS=-Wall -g
LIBS=-lm
OBJECTS_MAIN=main.o
OBJECTS_MAT=my_mat.o

all: libmymat.a libmymat.so progmains progmaind

progmains: $(OBJECTS_MAIN) libmymat.a #static
	$(CC) $(FLAGS) -o progmains $(OBJECTS_MAIN) libmymat.a $(LIBS)
progmaind: $(OBJECTS_MAIN) libmymat.so #dynamic
	$(CC) $(FLAGS) -o progmaind $(OBJECTS_MAIN) ./libmymat.so $(LIBS)

libmymat.a: $(OBJECTS_MAT)
	$(AR) -rcs libmymat.a $(OBJECTS_MAT)
libmymat.so: $(OBJECTS_MAT)
	$(CC) $(FLAGS) -shared -o libmymat.so $(OBJECTS_MAT)
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c $(LIBS)

.PHONY: clean all

clean: 
	rm -f *.o *.a *.so progmains progmaind