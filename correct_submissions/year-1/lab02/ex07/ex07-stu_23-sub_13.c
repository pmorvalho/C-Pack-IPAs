#include <stdio.h>
int main()
{
 int N,cont,num=0;
 scanf ("%d",&N);

 for (cont = 1; cont<=N; cont++)
   {
     if (N%cont == 0)
         {
          num = num+1;
         } 
   }
 printf ("%d\n",num);
 return 0;
}
