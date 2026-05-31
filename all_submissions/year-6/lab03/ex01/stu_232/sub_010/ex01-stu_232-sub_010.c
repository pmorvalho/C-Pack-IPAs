

#include <stdio.h>

void quadrado(int N){
    for (int i=1; i<=N; i++){
        for (int j=0; j<N; j++){
            printf("%d\t", i+j);
        }
        printf("\n");
    }
}



int main(){
    int num;
    while (1==1){
        scanf("%d", &num);
        if (num >= 2){
            break;
        }
    }
    quadrado(num);
    return 0;
}