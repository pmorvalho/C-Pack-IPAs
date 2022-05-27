#include <stdio.h>

#define NUM_INFERIOR 1

int main()
{
  int N;
  int numero, contador;

  contador = 0;
  scanf("%d", &N);
  for (numero = NUM_INFERIOR; numero <= N; numero = numero + 1)
    {
      if (N % numero == 0)
	contador++;
    }
  printf("%d\n", contador);
  return 0;
}
  
