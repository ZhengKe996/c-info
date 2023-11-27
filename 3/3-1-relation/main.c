#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;

    while (scanf("%d", &a)) {
        if (a > 3 && a < 10) {
            printf("a is between 3 and 10\n");
        } else {
            printf("a is not between 3 and 10\n");
        }
    }
    return 0;
}
