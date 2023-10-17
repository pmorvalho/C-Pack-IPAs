
#include <stdio.h>

int main(){
    int N, sum = 0, contador = 0, dig;

    scanf("%d", &N);

    while (N!=0){
        dig = N % 10;
        sum += dig;
        contador ++;
        N = N / 10;
    }
    printf("%d\n%d\n", contador, sum);
    return 0;
}
