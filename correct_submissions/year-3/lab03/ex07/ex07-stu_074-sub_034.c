
#include <stdio.h>

#define ADD 4
#define SUB 5

int main() {
    int digit = getchar();
    int num1 = 0, num2 = 0;
    int operation = ADD;

    while (digit != '\n') {
        while (digit == ' ' || digit == '+' || digit == '-') {
            if (digit == '+')
                operation = ADD;
            else if (digit == '-')
                operation = SUB;
            digit = getchar();
        }

        while (digit != ' ' && digit != '+' && digit != '-' && digit != '\n') {
            num2 *= 10;
            num2 += digit - '0';
            digit = getchar();
        }

        if (operation == ADD) {
            num1 += num2;
            num2 = 0;
        }
        if (operation == SUB) {
            num1 -= num2;
            num2 = 0;
        }
    }

    printf("%d\n", num1);
    return 0;
}