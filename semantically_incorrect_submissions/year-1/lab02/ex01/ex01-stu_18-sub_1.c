#include <stdio.h>

int main()
{
 int x,y,z,maior;
 printf("Insira 3 inteiros: \n");
 scanf (" %d%d%d",&x,&y,&z);
 maior = x;

 if (y > maior) {
  maior = y; }
 if (z > maior) {
  maior = z;
 }

 printf("O numero e: %d\n",maior);
return 0;
}

 


