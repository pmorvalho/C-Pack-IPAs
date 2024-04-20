#include <stdio.h>

int main() {
  int m1,m2,m3,m;
  scanf("%d%d%d", &m1, &m2, &m3);
  m = m1 > m2 ? m1 : m2;
  m = m3 > m ? m3 : m;
  printf("%d\n", m);
  return 0;
}
