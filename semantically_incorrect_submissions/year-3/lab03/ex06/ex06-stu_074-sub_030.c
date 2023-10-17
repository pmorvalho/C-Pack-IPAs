
#include <stdio.h>

int checkNine(int num) {
    int add = 0;
    while (num != 0) {
        add += num % 10;
        num /= 10;
    }
    if (add > 9)
        checkNine(add);
    else if (add == 9)
        return 1;
    else
        return 0;
    return 2;
}

int main() {
    int num = getchar();
    int sum = 0, i;

    for (i = 0; i < 100; i++) {
        sum += num - '0';
        num = getchar();
        if (num == '\n')
            break;
    }

    if (checkNine(sum))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}