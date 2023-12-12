#include <stdio.h>

int len(int arr[], int size) {
    printf("arr size=%d\n", size);
}

int main() {
    int a[] = {0, 0, 0, 0, 0};

    len(a, sizeof(a) / sizeof(int));
    return 0;
}
