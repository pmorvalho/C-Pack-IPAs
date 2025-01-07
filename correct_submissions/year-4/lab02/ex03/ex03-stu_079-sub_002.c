

#include <stdio.h>

void divisor_1() {

    int num1, num2, quo;

    scanf("%d%d", &num1, &num2);
    quo = num1 / num2;

    if (num1 == num2 *  quo) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

}

void divisor_2() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%s\n", (num1%num2) == 0 ? "yes" : "no");

}

int main() {

    divisor_2();

    return 0;
}
