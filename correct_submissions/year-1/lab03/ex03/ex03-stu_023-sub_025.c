#include <stdio.h>

void cruz(int n)
{
 int linha=1, coluna;
 for (;linha <= n; linha++)
 {
  for (coluna=1;coluna <= n; coluna++)
  {
   if ((coluna == linha) || (coluna == (n-linha+1)))
   {
    if (coluna==n)
       printf("*");
    else
       printf("* ");
   }
   else
   {
    if (coluna==n)
       printf("-");
    else
       printf("- ");
   }
  }
  printf("\n");
 }
 return ;
}

int main()
{
 int n;
 scanf("%d", &n);
 cruz(n);
 return 0;
}
