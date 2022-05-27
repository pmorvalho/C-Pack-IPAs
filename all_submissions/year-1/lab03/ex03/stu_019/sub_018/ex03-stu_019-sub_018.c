# include <stdio.h>

void cruz (int n)
{
  int k = 1, j, contador1 = 1, contador2 = n;

  while(k <= n)
  {
    for(j = 1; j <= n; j++)
    {
      if ((j == 1) && ((k == 1) || (k == n)))
      {
	printf("*");
	printf(" ");
      }
      else if((j == n) && ((k == 1) || (k == n)))
	printf("*");
      else if((contador1 == j) || (contador2 == j))
      {
	printf("*");
	printf(" ");
      }
      else if(j != n)
      {
	printf("-");
	printf(" ");
      }
      else
	printf("-");
    }
    printf("\n");
    if(((j % 2 == 0) && ((j != (n / 2) - 1))) || (j % 2 != 0))
    {
      contador1++;
      contador2--;
    }
    k++;
  }
}

int main ()
{
  int n;

  scanf("%d", &n);
  cruz(n);
  return 0;
}
