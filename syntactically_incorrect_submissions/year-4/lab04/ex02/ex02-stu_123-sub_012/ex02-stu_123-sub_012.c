#include <stdio.h>

#define VECMAX 100

void writeLine(int vec[], int n, int line) {
  for (int i = 0; i < n; i++) 
    putchar(vec[i] >= line ? '*' : ' ');

  putchar('\n');
}

void writeVec(int vec[], int n) {
  int i, max;
  
  for( i = 1, max = vec[0]; i < n; i++)
    if (max < vec[i])
      max = vec[i];

  for (i = 1; i <= max; i++)
    writeLine(vec, n, i);
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
