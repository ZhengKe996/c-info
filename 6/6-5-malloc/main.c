#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    char *p;
    scanf("%d", &size);

    p = (char *) malloc(size);  // 申请内存空间 malloc 返回 void*  (无类型指针)
    strcpy(p, "malloc success"); // strcpy 传入的类型是 char*
    puts(p);
    free(p); // 释放申请的空间时，给的地址必须是最初 malloc 返回给我们的地址
    printf("free success \n");
    return 0;
}
