# include <stdio.h>

int main()
{
  int N, novo_num, soma, contador;

  contador = 0;
  soma = 0;
  scanf("%d", &N);

  if (N == 0)
    contador = 1;
  else
    {
      for(novo_num = N; novo_num > 0; novo_num = novo_num / 10)
	{
	  contador++;
	  soma = soma + novo_num % 10;
	}
    }
  printf("%d\n", contador);
  printf("%d\n", soma);
  return 0;
}
  
