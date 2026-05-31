#include <stdio.h>

void quadrado(int n)
{
  for (int i = 1; i != n + 1; i++)
  {
    for (int j = i; j != i + n; j++)
    {
<<<<<<< HEAD
      printf("%d", j);
	  if (j != i + n - 1)
	  {
		printf("\t");
	  }
=======
      printf("%d\t", j);
>>>>>>> 18fc9ff521b213196792ad0ec7c542d019ef42f1
    }

    printf("\n");
  }

}

int main()
{
  int n;
  scanf("%d", &n);
  quadrado(n);
  return 0;
}


