#include <stdio.h>

int main()
{
  int num1, num2, num3;

  scanf("%d%d%d", &num1, &num2, &num3);

  if (num1 <= num2)
    {
      if (num1 <= num3)
	{
	  if (num2 <= num3)
	    printf("%d\t%d\t%d\n", num1, num2, num3);
	  else
	    printf("%d\t%d\t%d\n", num1, num3, num2);
	}
    }
  else if (num2 <= num1)
    {
      if (num2 <= num3)
	{
	  if (num1 <= num3)
	    printf("%d\t%d\t%d\n", num2, num1, num3);
	  else
	    printf("%d\t%d\t%d\n", num2, num3, num1);
	}
    }
  else
    {
      if (num2 <= num1)
	printf("%d\t%d\t%d\n", num3, num2, num1);
      else
	printf("%d\t%d\t%d\n", num3, num1, num2);
    }
  return 0;
}
