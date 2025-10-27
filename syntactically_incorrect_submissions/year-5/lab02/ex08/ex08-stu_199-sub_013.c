

#include <stdio.h>

int main() {

    int n, count = 0;
    float num, sum = 0, media;

    scanf("%d", &n);

    while (count < n) {
        scanf("%f", &num);
        sum += num;
        count++;
    }

    media = sum / n;
    printf("%.2f\n", media);
    
}