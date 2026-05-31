

#include <stdio.h>

int main() {
    int total, num;
    char op;

    
    scanf("%d", &total);

    
    while (scanf(" %c %d", &op, &num) == 2) {
        if (op == '+')
            total += num;
        else if (op == '-')
            total -= num;
    }

    printf("%d\n", total);
    return 0;
}