

#include <stdio.h>

int main() {
    
    int n, contador;
    float num, media, sum = 0;

    scanf("%d", &n);

    for ( contador= 0; contador < n; contador++)
    {
        scanf("%f", &num);
        sum += num;
    }

    media = sum / n;
    printf("%.2f\n", media);

    return 0;
}