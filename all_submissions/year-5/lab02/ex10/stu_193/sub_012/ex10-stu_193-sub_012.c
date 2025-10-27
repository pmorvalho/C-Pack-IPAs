

#include <stdio.h>

int main() {
    int N,rest,soma = 0, count = 0;

    scanf("%d",&N);

    while (N != 0) {
        rest = N % 10;
        soma = rest + soma;
        N = N / 10;
        count ++;
    }
    printf("%d\n%d\n",count,soma);
    
    return 0;
}