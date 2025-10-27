
#include <stdio.h>
int main(){
    int N, i, soma = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++){
        if (N % i == 0) soma++;
    }
    printf("%d\n", soma);
}