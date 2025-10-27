
#include <stdio.h>

void quadrado(int N){
  if (N<2) return;
  int i, j;
  for(i = 0; i < N; ++i){
    for(j = 0; j < N; ++j){
      if (j) putchar('\t'); 
      
      printf("%d", i+j+1);
    }
    putchar('\n'); 
  }
}

int main(){
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}
