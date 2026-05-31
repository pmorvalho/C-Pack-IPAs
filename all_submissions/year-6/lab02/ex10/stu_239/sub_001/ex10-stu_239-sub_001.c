

#include <stdio.h>

int main(){

    int N;
    int soma = 0;
    int num_digi = 0;

    scanf("%d", &N);

    do{
        soma += N % 10;
        num_digi++;
        N = (N - (N % 10)) / 10;

    }while (((N - (N % 10)) / 10) != 0);

    soma += N;
    num_digi++;

    printf("%d\n%d\n", num_digi, soma);

    return 0;

}