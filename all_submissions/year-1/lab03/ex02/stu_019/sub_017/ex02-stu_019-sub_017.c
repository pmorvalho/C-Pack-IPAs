#include <stdio.h>

void piramide(int n)
{
  int i, k = 1, var_aux = (2*n)-4, n_l = 1, contador_uns = 1, contador;
  for (i = 1; i <= (2*n)-2; i++)
    printf(" ");
  printf("1\n");
  for (contador = 1; contador < n; contador++)
  {
    n_l++;
    for (i = 0; i < var_aux; i++)
      printf(" ");
    var_aux = var_aux - 2;
    while (contador_uns != 2)
    {
      if (k != n_l)
      {
	if (k == 1)
	  printf("%d", k);
	else
	  printf(" %d", k);
	k++;
      }
      else
      {
	while (k >= 1)
	{
	  if (k != 1)
	    printf(" %d", k);
	  else
	  {
	    printf(" %d\n", k);
	    contador_uns++;
	  }
	  k--;
	}
      }
    }
    contador_uns = k = 1;
  }
}

int main()
{
  int n;

  scanf("%d", &n);
  piramide(n);
  return 0;
}
