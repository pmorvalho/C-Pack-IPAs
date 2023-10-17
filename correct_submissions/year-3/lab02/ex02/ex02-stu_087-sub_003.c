
#include <stdio.h>

int main(){

    int maior, menor, n;

    scanf("%d", &n);
    maior = n;
    menor = n;

    scanf("%d", &n);
    if (n > maior) {
        maior = n;
    }else{
        menor = n;
    }

    printf("%d\n%d\n", menor, maior);

    return 0;
}