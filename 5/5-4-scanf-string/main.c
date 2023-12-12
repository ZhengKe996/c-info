#include <stdio.h>

int main() {
    char c[10];
    char d[10];
    scanf("%s", c);
    printf("%s\n", c);


    scanf("%s%s", c, d);
    printf("c=%s,d=%s\n", c, d);

    return 0;
}
