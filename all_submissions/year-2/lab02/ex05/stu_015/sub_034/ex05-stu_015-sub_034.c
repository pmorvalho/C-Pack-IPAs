#include <stdio.h>

#define PASSO 1

int N, inicial = 1;

int main(){

    scanf("%d", &N);

    while (inicial <= N){
        printf("%d\n", inicial);
        inicial += PASSO;
    }

    return 0;

}