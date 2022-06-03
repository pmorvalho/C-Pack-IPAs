
#include <stdio.h>
#define MAX 80

int main() {
  int c,i;
  char s1[MAX], s2[MAX];
  scanf("%s %s", s1, s2);
  for (i = c = 0; s1[i] != '\0' && c == 0; ++i)
      c = s1[i] - s2[i];
  printf("%s\n", c > 0 ? s1 : s2);
  return 0;
}
