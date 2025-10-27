

#include <stdio.h>

int main(){

    int n;
    float num, media;
    float total = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%f", &num);

        total += num; 
    }

    media = total / n;

    printf("%.2f\n", media);

    return 0;
}
