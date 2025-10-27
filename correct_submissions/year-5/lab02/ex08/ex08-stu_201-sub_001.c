
#include <stdio.h>

int main() {
    int n, x;
    float value, media;

    if(scanf("%d%f", &n, &media) != 2 || n < 1) return 1;

    x = n;
    while(--x){
        if(scanf("%f", &value) != 1) return 1;
        media += value;
    }

    media /= n;

    printf("%.2f\n", media);
    return 0;
}