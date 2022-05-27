#include <stdio.h>


int main()
{
int maior,b,c;
scanf ("%d%d%d",&maior,&b,&c);
if (b >maior)
  {
   maior = b;
  }
if(c> maior)
  {
  maior = c;
  }
printf ("%d\n",maior);
return 0;
}
