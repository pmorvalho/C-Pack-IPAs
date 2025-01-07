
#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);
    if (num % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}