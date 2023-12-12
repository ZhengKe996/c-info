#include <stdio.h>
#include <string.h>

int mystrlen(char c[]) {
    int i = 0;
    while (c[i++]);
    return i - 1;
}

int main() {
    int len;
    char c[20];
    char d[100]="world";
    gets(c);
    puts(c);
    len = strlen(c);
    printf("len=%d",len);
    len = mystrlen(c);
    printf("len=%d",len);



    return 0;
}
