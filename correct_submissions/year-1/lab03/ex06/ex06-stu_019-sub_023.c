#include <stdio.h>

void divisivel (long num)
{
  long soma = 0;
  int dig;
  
  while (num != 0)
    {
      dig = num % 10;
      soma = soma + dig;
      num = num / 10;
    }
  if ((soma % 9) == 0)
    printf("yes\n");
  else
    printf("no\n");
}

int main ()
{
  char c;
  int char_to_int;
  long num = 0, contador = 0;

  while ((c = getchar()) != EOF)
  {
    contador++;
    if (contador <= 100)
    {
      if (c >= '0' && c <= '9')
      {
	char_to_int = c - '0';
	num = num * 10 + char_to_int;
      }
    }
    else
      divisivel(num);	
  }
  divisivel(num);
  return 0;
}
