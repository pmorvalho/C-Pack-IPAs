

#include <stdio.h>

int main(){

    int N, i=0;
    float num, total=0;

    scanf("%d", &N);

    while (i++, i <= N){

        scanf("%f", &num);
        total = total + num;
    }

    printf("%.2f\n", total / N);
    return 0;
}