CC ?= gcc
# -fPIC is mandatory for OCaml bindings
CFLAGS = -fPIC -Wall -Wextra

all: libfoo.a libfoo.so

libfoo.a: foo.o
	ar rcs $@ $<

libfoo.so: foo.o
	$(CC) -shared -o $@ $<

foo.o: foo.c foo.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.a *.so