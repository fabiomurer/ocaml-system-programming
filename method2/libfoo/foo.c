#include <stdio.h>
#include "foo.h"

int foo_init(void) {
    printf("DEBUG: foo_init called\n");
    return 0;
}

void foo_fnubar(char *s) {
    printf("DEBUG: foo_fnubar called with: %s\n", s);
}

void foo_exit(void) {
    printf("DEBUG: foo_exit called\n");
}