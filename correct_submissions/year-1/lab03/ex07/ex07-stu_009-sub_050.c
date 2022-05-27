#include <stdio.h>

#define ALGARISMOSUM 1
#define ALGARISMOSUB -1
#define OPERADORES 0

int main() {
  int c;
  int estado = ALGARISMOSUM;

  int num = 0;
  int res = 0;
  
  while ((c = getchar()) != EOF) {
    if (estado == ALGARISMOSUM) {
      if (c != ' ' && c != '\n') {
	num = num * 10 + (c-'0');
      }
      else {
	res += num;
	num = 0;
	estado = OPERADORES;
      }
    }
    else if (estado == OPERADORES) {
      if (c == '+') {
	estado = ALGARISMOSUM;
	c = getchar();
      }
      else if (c == '-') {
	estado = ALGARISMOSUB;
	c = getchar();
      }
    }
    else if (estado == ALGARISMOSUB) {
      if (c != ' ' && c != '\n') {
	num = num * 10 + (c-'0');
      }
      else {
	res -= num;
	num = 0;
	estado = OPERADORES;
      }
    }
  }
  printf("%d\n", res);
  return 0;
}
