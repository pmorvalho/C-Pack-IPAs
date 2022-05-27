#include <stdio.h>

#define UMA_HORA_EM_SEG 3600
#define UMA_HORA_EM_MIN 60

int main()
{
  int n;
  int horas, minutos, segundos;
  float h1, h2, m1, m2, s1, s2;

  scanf("%d", &n);

  horas = (n / UMA_HORA_EM_SEG);
  minutos = ((n % UMA_HORA_EM_SEG) / UMA_HORA_EM_MIN);
  segundos = ((n % UMA_HORA_EM_SEG) % UMA_HORA_EM_MIN);

  h1 = (horas - (horas % 10)) / 10;
  h2 = horas % 10;
  m1 = (minutos - (minutos % 10)) / 10;
  m2 = minutos % 10;
  s1 = (segundos - (segundos % 10)) / 10;
  s2 = segundos % 10;

  printf("%1.0f%1.0f:%1.0f%1.0f:%1.0f%1.0f\n", h1, h2, m1, m2, s1, s2);
  return 0;
}
  
  
