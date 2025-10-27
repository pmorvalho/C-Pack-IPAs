
#include <stdio.h>

void quadrado(int N){

    for (int i=1;i<=N;i++){
        for (int j=i; j< i+N-1; j++){
            printf("%d\t", j);
        }
        printf("%d\n", i+N-1);
    }
}
int main(){
    
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}