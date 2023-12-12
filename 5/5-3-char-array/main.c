#include <stdio.h>

void print(char d[]) {
    int i = 0;
    while (d[i]) {
        printf("%c", d[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char c[5] = {'h', 'e', 'l', 'l', '0'};
    char d[5] = "how";
    printf("%s\n", c);
    printf("%s\n", d);

    print(d);
    return 0;
}
