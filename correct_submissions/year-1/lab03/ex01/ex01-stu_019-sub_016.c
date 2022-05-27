#include <stdio.h>

void quadrado(int n)
{
  int i = 1, t = 1, quant_nums = n * n;
  long contador = 0;
  
  while (i <= n)
  {
    contador++;
    if (contador <= quant_nums)
    {
      if (i == n)
      {
	printf("%d\n", i);
	i = ++t;
	n++;
      }
      else
      {
	printf("%d\t", i);
        ++i;
      }
    }
    else
      i = n + 1;
  }
}

int main()
{
  int n;

  scanf("%d", &n);
  quadrado(n);
  return 0;
}
