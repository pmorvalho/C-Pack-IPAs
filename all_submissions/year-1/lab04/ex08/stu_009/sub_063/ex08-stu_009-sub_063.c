#include <stdio.h>

#define DIM 101

#define N1 1
#define N2 2
#define IGUAL 0

int main()
{
  int estado;
  char n1[DIM];
  char n2[DIM];
  int i;
  
  fgets(n1, DIM, stdin);
  fgets(n2, DIM, stdin);
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
    printf("%s", n1);
  }
  else if (estado == N2) {
    printf("%s", n2);
  }
  else {
    printf("IGUAIS");
  }

  return 0;
}
