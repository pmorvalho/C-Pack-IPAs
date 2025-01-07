
#include <stdio.h>

int main() {
    int num1, num2, num3, maxNum;

    scanf("%d %d %d", &num1, &num2, &num3);

    maxNum = num1;

    if (maxNum < num2) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
    printf("%d\n", maxNum);
    return 0;
}