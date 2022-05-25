#include <stdio.h>

int main()
{
  int num1, num2, num3;

  int maior;

  scanf("%d%d%d", &num1, &num2, &num3);
  maior = num1;

  if (num2 >= num1)
    {
    if (num2 >= num3)
      maior = num2;
    else
      if (num3 >= num1)
	maior = num3;
    }
  printf("%d\n", maior);
  return 0;
}
  
