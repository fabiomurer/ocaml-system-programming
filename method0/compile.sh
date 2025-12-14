ocamlopt -c myprog.ml
ocamlopt -c mylib_stubs.c
ocamlopt -o myprog myprog.cmx mylib_stubs.o