#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    int res = scanf("%d %c%f", &i, &c, &f);
    printf("i=%d, c=%c, f=%5.2f", i, c, f);
}