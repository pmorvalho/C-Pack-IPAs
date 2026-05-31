

#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    float curr, media;
    float total = 0;

    for (int i = 0; i < N; i++){
        scanf("%f", &curr);
        total += curr;
    }

    media = total / N;

    printf("%.2f\n", media);

    return 0;
}