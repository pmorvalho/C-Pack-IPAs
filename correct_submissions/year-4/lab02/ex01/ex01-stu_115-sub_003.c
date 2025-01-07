
#include <stdio.h>

int main() {
    int num1, num2, num3, maxNum;

    scanf("%d %d %d", &num1, &num2, &num3);

    maxNum = num1;

    maxNum = maxNum < num2 ? num2 : maxNum;

    maxNum = maxNum < num3 ? num3 : maxNum;

    printf("%d\n", maxNum);
    return 0;
}