

#include <stdio.h>

int main(void) {

    int num1, num2;

    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0)
        printf("yes");
    else if (num1 % num2 != 0)
        printf("no");
    return 0;
}