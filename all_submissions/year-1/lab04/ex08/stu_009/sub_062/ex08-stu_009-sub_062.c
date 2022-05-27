#include <stdio.h>

#define DIM 101

#define N1 1
#define N2 2
#define IGUAL 0

void le_numero(char n[]);

int main()
{
  int estado;
  char n1[DIM];
  char n2[DIM];
  int i;

  le_numero(n1);
  le_numero(n2);
  estado = IGUAL;
  
  for (i = 0; n1[i] != '\0' && estado == IGUAL; i++) {
    if (n1[i] > n2[i] && estado == IGUAL) {
      estado = N1;
    }
    else if (n2[i] > n1[i]) {
      estado = N2;
    }
  }
  if (estado == N1) {
    printf("%s\n", n1);
  }
  else if (estado == N2) {
    printf("%s\n", n2);
  }
  else {
    printf("IGUAIS\n");
  }
  
  return 0;
}

void le_numero(char n[])
{
  int i;
  char c;

  i = 0;
  c = getchar();
  while(c != '\n' && c != ' ' && c != '\t' && c != EOF) {
    n[i] = c;
    i++;
    c = getchar();
  }
  n[i] = '\0';
}
