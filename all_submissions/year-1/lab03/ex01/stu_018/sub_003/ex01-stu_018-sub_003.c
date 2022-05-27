#include <stdio.h>


void quadrado(int N)  {

 int i,j, k = 0;

 for (i=1; i <= N; i++) {

  k ++;

  for(j = k ; j <= N + k -1; j ++) {
  
    if ( j == N + k - 1) 

      printf("%d",j);

    else
 
      printf("%d\t", j); }
  
  printf("\n");} 
}


int main() {
 
 int N;

 scanf("%d",&N);
 
 quadrado(N);

return 0;

} 

