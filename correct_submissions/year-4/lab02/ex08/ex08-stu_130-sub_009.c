
#include <stdio.h>

int main(){
    int q, contador = 0;
    float num, media = 0;

    scanf("%d", &q);
    for(; contador < q; contador++){
        scanf("%f", &num);
        media += num;
    }
    media /= q;
    printf("%.2f\n", media);
    return 0;
}