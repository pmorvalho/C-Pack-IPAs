
#include <stdio.h>

int main() {
    int num, num2, RESTO;
    scanf("%d%d", &num, &num2);
    RESTO = num%num2;
    if (RESTO = 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}