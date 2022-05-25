#include <stdio.h>



#define HORA 3600
#define MINUTO 60

int main()
{
  int n, h, m;
  scanf("%d", &n);

  h = n / HORA;
  n %= HORA;
  m = n / MINUTO;
  n %= MINUTO;

  printf("%02d:%02d:%02d\n", h, m, n);

  return 0;
}