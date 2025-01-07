
#include <stdio.h>

int main() {
    float media,num;
    int x;
    media = 0;
    scanf("%d",&x);
    while (scanf("%f", &num) == 1) {
        media= media + num;
    }

    media=media/x;
    printf("%.2f\n", media);
    return 0;
}