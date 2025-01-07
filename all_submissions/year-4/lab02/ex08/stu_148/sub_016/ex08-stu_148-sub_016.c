
#include <stdio.h>

int N, i = 1;
float num_in, media;

int main () {
    scanf("%d", &N);
    scanf("%f", &media);

    while (N != i) {
        scanf("%f", &num_in);
        media = (media + num_in) / 2;
        i++;
    }

    printf("%.2f\n", media);

    return 0;
}