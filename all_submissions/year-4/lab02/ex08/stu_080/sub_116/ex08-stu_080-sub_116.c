

#include <stdio.h>

int main(){
    int n;
    float media;
    scanf("%d", &n);
    float numbers[n];
    for (int i = 0; i < n; i++){
        scanf("%f", &numbers[i]);
        media += numbers[i];
    }

    media /= n;

    printf("%.2f\n", media);
    return 0;
}