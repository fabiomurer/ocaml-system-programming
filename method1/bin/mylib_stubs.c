#include <stdio.h>

void caml_hello_world(void) {
  printf("Hello from C!\n");
}

int caml_sum(int a, int b) {
  int result = a + b; 
  return result;
}