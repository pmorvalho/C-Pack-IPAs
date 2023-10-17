
#include <stdio.h>
#define VECMAX 101

int main(){
    int i, j, n, maior = 0, vetor[VECMAX];

    scanf("%d\n", &n);

    for(i = 0; i < n; i++ ){
        if(i)
            scanf(" %d", &vetor[i]);
        else
            scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++)
        if(vetor[i] > maior)
            maior = vetor[i];

    for(i = 0; i < maior; i++){
        for(j = 0; j < n; j++){
            if(vetor[j] == maior){
                putchar('*');
            }
            else{
                putchar(' ');
                vetor[j]++;
            }
        }
        putchar('\n');
    }

    return 0;
}