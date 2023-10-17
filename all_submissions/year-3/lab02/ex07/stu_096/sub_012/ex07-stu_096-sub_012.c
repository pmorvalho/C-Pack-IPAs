
#include <stdio.h>
int main () {
    int N, den = 1, div = 0;
    scanf("%d", &N);
    while (den <= N){
        if (N%den == 0){
            div++;
        }
        den++;       
    }
    printf("%d", div);
    return 0;
}