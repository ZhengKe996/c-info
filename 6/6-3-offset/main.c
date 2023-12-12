#include <stdio.h>

// 指针偏移
#define N 5

int main() {
    int a[N] = {0, 1, 2, 3, 4};
    int *p;
    int i;
    p = a;
    for (int i = 0; i < N; i++) {
        printf("%3d", *(p + i));
    }
    printf("\n-------------\n");
    p = &a[4];
    for (int i = 0; i < N; i++) {
        printf("%3d", *(p - i));
    }
    return 0;
}
