

#include <stdio.h>

int main(){
    int N, divisor, cont = 2;
    scanf("%d", &N);
    divisor = N - 1;
    while(divisor > 1){
        if (N % divisor == 0){
            cont++;
        }
        divisor--;
    }
    printf("%d\n", cont);
    return 0;
}