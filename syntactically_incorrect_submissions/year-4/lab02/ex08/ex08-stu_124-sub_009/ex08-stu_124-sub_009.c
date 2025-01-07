
#include <stdio.h>


int main(){
    unsigned int N;
    float num, media;
    media = 0;
    scanf("%u", &N);
    for(unsigned int i = 1; i <= N; i++){
        scanf("%f", &num);
        media = media + num;
    }
    printf("%.2f\n", media/N);
    return 0;
}