#include <stdio.h>

#define INFERIOR 1

int main()
{
  int N, num;

  scanf("%d", &N);
  for(num = INFERIOR; num <= N; num = num + 1)
    printf("%d\n", num);
  return 0;
}
  

  
