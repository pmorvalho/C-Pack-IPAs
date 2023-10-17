
#include <stdio.h>
int main(){
    int maior, atual, i;

    scanf("%d", &atual);
    maior = atual;

    for (i = 0; i < 2; i++){
        scanf("%d", &atual);

        if (atual > maior){
            maior = atual;
        }
    }

    printf("%d\n", maior);

    return 0;
}