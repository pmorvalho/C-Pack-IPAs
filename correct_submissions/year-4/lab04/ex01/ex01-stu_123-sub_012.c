#include <stdio.h>

#define VECMAX 100

void writeLine(int s) {
  while (s--)
   putchar('*');

  putchar('\n');
}

void writeVec(int vec[], int n) {
  int i;

  for (i = 0; i < n; i++)
    writeLine(vec[i]);
}

int readVec(int vec[]) {
  int n, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", vec + i);

  return n;
}

int main() {
  int vec[VECMAX];
  int n;

  n = readVec(vec);
  writeVec(vec, n);
  return 0;
}
