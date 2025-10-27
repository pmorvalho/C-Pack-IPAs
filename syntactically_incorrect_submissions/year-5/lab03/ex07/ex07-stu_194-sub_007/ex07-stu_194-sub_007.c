

#include <stdio.h>

int main() {
    int in_numbers = 0;
    int separator;
    int operator;

    int acc = 0, operand = 0;
    scanf("%d", &acc);

    while ((separator = getchar()) != '\n') {
        operator = getchar();
        if (scanf("%d", &operand) == 0) break;

        if (operator == '+') {
            acc += operand;
        } else if (operator == '-') {
            acc -= operand;
        }
    }

    printf("%d\n", acc);

    return 0;
}