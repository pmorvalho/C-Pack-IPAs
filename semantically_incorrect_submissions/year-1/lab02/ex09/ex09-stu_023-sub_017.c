#include <stdio.h>

int main ()
{
 int N,h,m,s;
 scanf ("%d",&N);
 h = N/1440;
 N = N - h*1440;
 m = N/60;
 N = N - m*60;
 s = N;
 
 printf ("%d:%d:%d\n",h,m,s);
 return 0;
}
