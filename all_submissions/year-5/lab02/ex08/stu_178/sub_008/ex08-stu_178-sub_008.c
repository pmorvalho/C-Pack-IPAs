
#include <stdio.h>

int main(){
    int N, cont;
    float media, mediapre, num;
    scanf("%d", &N);
    mediapre = 0;
    for (cont=1; cont<=N; cont++){
        scanf("%f", &num);
        mediapre += num;
    }
    media = mediapre / N;
    printf("%.2f\n", media);
    return 0;
}