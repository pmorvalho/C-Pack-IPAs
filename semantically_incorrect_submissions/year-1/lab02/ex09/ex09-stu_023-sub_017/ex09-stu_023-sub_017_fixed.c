#include <stdio.h>

int main ()
{
 int N,h,m,s;
 scanf ("%d",&N);
 h = N/3600;
 N = N%3600;
 m = N/60;
 
 s = N%60;
 
 printf ("%02d:%02d:%02d\n",h,m,s);
 return 0;
}
