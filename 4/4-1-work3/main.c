#include <stdio.h>

int main() {
  int temp = 0;

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 20; j++) {
      for (int k = 1; k <= 50; k++) {
        for (int l = 1; l <= 100; l++) {
          if (i + j + k + l == 40 && (i * 10 + j * 5 + k * 2 + l) == 100)
            temp++;
        }
      }
    }
  }

  printf("%d", temp);
  return 0;
}