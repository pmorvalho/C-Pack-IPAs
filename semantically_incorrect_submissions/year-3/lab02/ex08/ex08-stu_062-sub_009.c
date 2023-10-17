
#include <stdio.h>


int main() {
    int n;
    float total = 0.00;
    float num, media;

    scanf("%d", &n);

    while (n > 0) {
        scanf("%f", &num);
        total = total + num;
        n--;
    }

    media = (total)/(n);

    printf("%.2f\n", media);

    return 0;

}
