#include "../include/main.h"

int Sum(int* a, int n, int i) {
  int sum = 0;

  if (a[i] % 2 != 0) {
    sum += a[i];
  }

  if (i < n - 1) {
    sum += Sum(a, n, i + 1);
  }

  return sum;
}