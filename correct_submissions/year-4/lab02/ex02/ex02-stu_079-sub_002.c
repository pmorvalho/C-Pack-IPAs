

#include <stdio.h>

void imprime_2() {
    int num1, num2;

    scanf("%d%d", &num1, &num2);

    if (num1 < num2) {
        printf("%d\n%d\n", num1, num2);
    }
    else {
        printf("%d\n%d\n", num2, num1);
    }
}

int main() {

    imprime_2();

    return 0;
}
