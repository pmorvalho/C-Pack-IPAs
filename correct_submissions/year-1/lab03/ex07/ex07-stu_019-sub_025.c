#include <stdio.h>

int main ()
{
  char c, op = '0';
  long res;
  int num1 = 0, contador = 0;

  while ((c = getchar()) != '\n')
      if (c >= '0' && c <= '9')
	num1 = num1 * 10 + (c - '0');
      else if (c == '+' || c == '-')
      {
	contador++;
	if (contador == 1)
	  res = num1;
	if (contador > 1)
	{
	 if (op == '+')
	   res = res + num1;
	 else
	   res = res - num1;
        }
	if (c == '+')
	  op = '+';
	else
	  op = '-';
        num1 = 0;
      }
  if (op == '+')
    res = res + num1;
  else if (op == '-')
    res = res - num1;
  else
    res = num1;
  printf("%ld\n", res);
  return 0;
}
