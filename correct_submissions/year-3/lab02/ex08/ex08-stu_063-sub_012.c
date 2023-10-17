

#include <stdio.h>

int main(){
    int n, i;
    float f, media;
    scanf("%d", &n);
    for (i = 0; n > i; i++){
        scanf("%f", &f);
        media += f;
    }
    media = media / n;
    printf("%.2f\n", media);
    return 0;
}