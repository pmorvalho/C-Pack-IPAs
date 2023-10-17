
#include <stdio.h>

int main() {
    int num, result;
    char op;

    scanf("%d", &result); 
    while (scanf(" %c %d", &op, &num) == 2) { 
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }
    }

    printf("%d\n", result);

    return 0;
}
