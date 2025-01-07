
#include <stdio.h>

int main() {
    int n_1, n_2, n_3, foo;

    scanf("%d %d %d", &n_1, &n_2, &n_3);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}
    