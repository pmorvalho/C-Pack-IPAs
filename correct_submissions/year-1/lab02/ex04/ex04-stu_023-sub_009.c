#include <stdio.h>

int main ()
{
int a,b,c,cont,acabou=1;
scanf ("%d%d%d",&a,&b,&c);
while (acabou)
  {
   acabou = 0;
   if (a>b)
    {
     cont = a;
     a = b;
     b = cont;
     acabou = 1;
    } 
   if (b>c)
    {
     cont = b;
     b =c;
     c = cont;
     acabou = 1;
    }   
  }
printf ("%d %d %d\n",a,b,c);
return 0;
}
