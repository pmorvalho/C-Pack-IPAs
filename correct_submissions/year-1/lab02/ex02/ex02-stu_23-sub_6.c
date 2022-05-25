#include <stdio.h>

int main()
{
int N,M,mud; 
scanf ("%d%d",&N,&M);
if (N>M)
 {
 mud = N;
 N = M;
 M = mud;
 }

printf ("%d\n%d\n", N, M); 
return 0;
}
