
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%s\n", num1 % num2 == 0 ? "yes" : "no");

    return 0;
}