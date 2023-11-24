#include <stdio.h>

int main() {
  int i = 10;
  float f = 93.2;
  printf("number=%3d score=%5.2f\n", i, f);   // 右对齐
  printf("number=%-3d score=%5.2f\n", i, f);  // 左对齐
  return 0;
}