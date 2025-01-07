
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N;
    float media, sum = 0, num;
    scanf("%d", &N);
    scanf("%f", &num);
    sum += num;
    for (int i = 1; i < N; i++) {
        scanf("%f", &num);
        sum += num;
    }
    media = sum/N;
    printf("%.2f\n", media);

    return 0;
}