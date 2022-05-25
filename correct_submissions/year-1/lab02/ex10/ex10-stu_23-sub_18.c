#include <stdio.h>

int main()
{
 int N,dig,digs=0,soma=0;
 scanf ("%d",&N);
 while (N != 0)
  {
   dig = N%10;
   digs = digs + 1;
   soma = soma +dig;
   N = N/10;
  }
 printf ("%d\n%d\n",digs,soma);
 return 0;
}
