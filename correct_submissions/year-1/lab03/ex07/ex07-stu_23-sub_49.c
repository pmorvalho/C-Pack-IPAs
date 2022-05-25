#include <stdio.h>

int main()
{
 int num_a=0, num_b=0,soma=0,ops=0,ops_a=0;
 char op,ler;
 while((ler = getchar()) != EOF)
 {
  if (ler == '+')
    {
     op = '+';
     ops++;
    }
  else if (ler == '-')
    {
     op = '-';
     ops++;
    }
  else if (ler >='0' && ler <='9'&& ops_a==ops)
   {
    num_a = num_a*10+ ((char)ler-(char)'0');
   }
  else if (ler >='0' && ler <='9'&& ops_a!=ops)
   {
    num_b = num_b*10 + ((char)ler-(char)'0');
   }
  else if (num_b != 0 && ops_a != ops && num_a != 0 )
   {
    if (op== '+')
      soma = num_a + num_b;
    if (op=='-')
      soma = num_a - num_b;
    num_b = 0;
    num_a = soma;
    ops_a++;
   }
  if (ler == '\t' || ler == '\n')
    {
     printf("%d\n", soma);
     num_a = 0;
    }
 }
 return 0;
}
