

#include <stdio.h>

void quadrado(int N){
    for(int i=1; i<=N; i++){
        for(int j=i; j < i+N; j++){
            if (j == i + N - 1){
                printf("%d\n", j);
            }
            else{
                printf("%d\t", j);
            }
           
        }
    }
}

int main(){
   int N;
   scanf("%d", &N);
   quadrado(N);
   return 0; 
}