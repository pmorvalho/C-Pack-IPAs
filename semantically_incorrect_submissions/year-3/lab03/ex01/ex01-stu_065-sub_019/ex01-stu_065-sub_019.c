
#include <stdio.h>

void quadrado(int N){
    int inicial, num;
    for (inicial = 1; inicial <= N; inicial++){
        for (num = inicial; num < inicial + N; num++){
            printf("%d\t", num);
        }
        printf("\n");
    }
}


int main(){
    int N;
    scanf("%d\n", &N);
    while(N<2)
        scanf("%d\n", &N);
    quadrado(N);
    return 0;
}