
#include <stdio.h>

#define HORA_SEGUNDOS 3600
#define MINUTO_SEGUNDOS 60

int main() {
  int horas, minutos, segundos;
  int tempo;

  scanf("%d", &tempo);

  horas = tempo / HORA_SEGUNDOS;
  tempo %= HORA_SEGUNDOS;
  minutos = tempo / MINUTO_SEGUNDOS;
  segundos = tempo % MINUTO_SEGUNDOS;

  printf("%02d:%02d:%02d\n", horas, minutos, segundos);
  return 0;
} 
