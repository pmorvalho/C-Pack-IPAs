#include <stdio.h>

int main()
{
  int n, horas, minutos;
  scanf("%d", &n);

  horas = n / 3600;
  n %= 3600;
  minutos = n / 60;
  n %= 60;

  printf("%02d:%02d:%02d\n", horas, minutos, n);

  return 0;
}