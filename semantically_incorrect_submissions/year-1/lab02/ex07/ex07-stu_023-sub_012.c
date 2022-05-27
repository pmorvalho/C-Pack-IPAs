#include <stdio.h>
int main()
{
 int N,cont;
 scanf ("%d",&N);

 for (cont = 1; cont<=N; cont++)
   {
     if (N%cont == 0)
         {
          printf ("%d\n",cont);
         } 
   }

 return 0;
}
