
#include <stdio.h>

void divisible_by_9(int n) {
    if (n % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

int main() {

    int sum = 0;
    char c = 0;

    while (c != '\n') {
        scanf("%c", &c);
        if (c >= '0' && c <= '9') {
            sum += c - '0';
        }
    }

    divisible_by_9(sum);

    return 0;
}