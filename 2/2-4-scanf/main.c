#include <stdio.h>

int main() {
    int i;
    char c;
    scanf("%d", &i);
    printf("i=%d\n", i);
    fflush(stdin);
    scanf("%c", &c);
    printf("c=%c\n", c);
    return 0;
}
