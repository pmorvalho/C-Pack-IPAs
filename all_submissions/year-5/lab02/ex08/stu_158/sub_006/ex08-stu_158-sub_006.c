
#include <stdio.h>

int main() {
    int times;
    float num, sum = 0;

    scanf("%d", &times);
    for (int i = 0; i < times; i++) {
        scanf("%f", &num);
        sum += num;
    }
    printf("%.2f\n", (sum / times));

    return 0;
}