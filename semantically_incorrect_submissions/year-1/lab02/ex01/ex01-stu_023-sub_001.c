#include <stdio.h>


int main()
{
int maior,cont,num;
scanf ("%d",&maior);
for(cont =0;cont <2; cont++)
  {
   scanf("%d",&num);
   if (num > maior)
     {
     maior = num;
     } 
  }
printf ("O maior e %d\n",maior);
return 0;
}
