#include <stdio.h>

void change(int *j) { *j = 5; }

int main() {
    int i = 10;
    printf("before i=%d\n", i);
    change(&i);
    printf("after i=%d\n", i);
    return 0;
}
