#include <stdio.h>

int main() {
  int a, b, c, temp;
  scanf("%d", &a);
  c = a;
  b = 0;

  while (a) {
    temp = a % 10;
    b = b * 10 + temp;
    a = a / 10;
  }

  if (b == c)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}