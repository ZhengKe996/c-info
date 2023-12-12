#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    int res = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < N; i++) {
        if (a[i] == 2) {
            res++;
        }
    }

    printf("%d", res);


    return 0;
}