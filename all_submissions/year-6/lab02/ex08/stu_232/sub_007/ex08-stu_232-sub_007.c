

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    float num, media;
    float sum = 0;

    for (int i = 0; i<N; i++){
        scanf("%f", &num);
        sum += num;
    }
    media = sum/N;

    printf("%.2f\n", media);
    
    return 0;
}