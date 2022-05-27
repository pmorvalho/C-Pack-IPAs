#include <stdio.h>

int main()
{
  int N, M;

  scanf("%d%d", &N, &M);

  if (N % M == 0)
    printf("%s\n", "\"yes\"");
  else
    printf("%s\n", "\"no\"");

  return 0;
}
