

#include <stdio.h>

int main(){
    int n, i, contador=0;
    float x, media;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        contador += 1;
        if (i == 0)
          media = x;
        media = ((media + x)/contador);
    }
    printf("%.2f", media);
    
    return 0;
}