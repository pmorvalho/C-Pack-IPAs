
#include <stdio.h>

int main() {
    int num, num2, num3, min, max, mid;
    scanf("%d %d %d", &num, &num2, &num3);
    if (num > num2) {
        if (num > num3) {
            max = num;
            if (num2 > num3) {
                mid = num2;
                min = num3;
            } else {
                mid = num3;
                min = num2;
            }
        } else {
            max = num3;
            mid = num;
            min = num2;
        }
    } else {
        if (num2 > num3) {
            max = num2;
            if (num > num3) {
                mid = num;
                min = num3;
            } else {
                mid = num3;
                min = num;
            }
        } else {
            max = num3;
            mid = num2;
            min = num;
        }
    }
    printf("%d %d %d", min, mid, max);

    return 0;
} 