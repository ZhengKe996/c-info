#include <stdio.h>

void change(char *d) {
    *d = 'H';
    d[1] = 'O';
    *(d + 2) = 'W';
};

int main() {
    char c[10] = "hello";
    change(c);
    puts(c);
    return 0;
}
