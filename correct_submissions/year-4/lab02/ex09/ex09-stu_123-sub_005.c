#include <stdio.h>

#define SEGUNDOS_HORA 3600
#define SEGUNDOS_MINUTO 60

int main() {
  int n;
  int horas, minutos, segundos;

  scanf("%d", &n);

  horas = n / SEGUNDOS_HORA;
  n = n % SEGUNDOS_HORA;
  minutos = n / SEGUNDOS_MINUTO;
  segundos = n % SEGUNDOS_MINUTO;

  printf("%02d:%02d:%02d\n", horas, minutos, segundos);
  return 0;
}
