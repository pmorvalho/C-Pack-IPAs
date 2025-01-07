
#include <stdio.h>

int main()
{
   int n, dig, soma;
   
   scanf("%d", &n);

   soma = 0;
   dig = 0;

   for (int i = n; i >= 1; i /= 10)
   {
      dig += 1 ;
      soma += i % 10;
   }
   printf("%d\n%d\n", dig, soma);

   return 0;
      
}