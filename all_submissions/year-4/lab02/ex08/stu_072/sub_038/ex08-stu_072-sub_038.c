

#include <stdio.h>

int main() {

    float media, temp;
    int nums;

    scanf("%d", &nums);

    for (int i = 0; i < nums; i++) {
        scanf("%f", &temp);
        media += temp;
    }


    printf("%.2f", media/nums);
    return 0;
}