#include <stdio.h>

void cruz (int N)  {

 int i, j, cont = 1;

 for ( i = 1; i<= N ; i++)  {

  for (j = 1; j <= N ; j++)  {

   if ( j== N - cont + 1 || j == cont) {
     printf ( "*");  }

   else  {
    printf("-");  }}

  printf("\n");
  cont ++;
 }
} 
int main ()  {
 int N;
 scanf("%d", &N);
 cruz(N);
 return 0;
}
