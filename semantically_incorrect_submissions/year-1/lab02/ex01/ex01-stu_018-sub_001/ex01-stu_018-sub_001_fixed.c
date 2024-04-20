#include <stdio.h>

int main()
{
 int x,y,z,maior;

 scanf (" %d%d%d",&x,&y,&z);
 maior = x;

 if (y > maior) {
  maior = y; }
 if (z > maior) {
  maior = z;
 }

 printf("%d\n",maior);
return 0;
}

 


