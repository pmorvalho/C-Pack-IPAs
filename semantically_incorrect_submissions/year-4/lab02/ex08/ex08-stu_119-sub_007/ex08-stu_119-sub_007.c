
#include <stdio.h>

int main() {
    float media,num;
    int x;
    media = 0;
    x=0;
    while (scanf("%f", &num) == 1) {
        media= media + num;
        x++;
    }

    media=media/x;
    printf("%.2f\n", media);
    return 0;
}