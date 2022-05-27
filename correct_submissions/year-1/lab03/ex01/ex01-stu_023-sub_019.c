#include <stdio.h>

void quadrado(int n)
{
 int c,n_p=n,ant;
 for (c=1;c<=n_p;c++)
 {
  if (c==n_p)
  {
   printf("%d\n",c);
   ant++;
   c=ant;
   n_p++;
   n--;
   if (n==0)
   {
    return;
   } 
  }
  else
  {
   printf("%d\t",c);
  }
 }
 return;
}

int main()
{
 int n;
 scanf("%d",&n);
 if (n>=2)
 {
 quadrado(n);
 }
 return 0;
}

