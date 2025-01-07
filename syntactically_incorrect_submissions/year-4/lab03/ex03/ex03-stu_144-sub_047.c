
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    cruz(N);
    return 0;
}

void cruz(int N){
    
    
    
    

    for(int i = 1; i <= N; i++){
      for(int j = 1; j <= N; j++){
        printf("%c", (i == j || j == N - i+1)? '*' : '-');
        
      }
    }
}