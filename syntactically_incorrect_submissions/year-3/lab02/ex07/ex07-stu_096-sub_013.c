
#include <stdio.h>
int main () {
    int N, den = 1, div = 0;
    scanf("Introduza um numero inteiro positivo:%d", &N);
    while (den <= N){
        if (N/den == 0)
            div++ ;           
    }
    printf("%d", div)
    return 0;
}