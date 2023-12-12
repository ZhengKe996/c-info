#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *print_stack() {
    char c[100] = "I am print_stack func";
    puts(c);
    return c;
}

char *print_malloc() {
    char *c = (char *) malloc(100);
    strcpy(c, "I am print_malloc func");
    puts(c);
    return c;
}

int main() {
    char *p;
    p = print_stack();
    puts(p);
    printf("\n------------------------\n");
    p = print_malloc();
    puts(p);
    return 0;
}
