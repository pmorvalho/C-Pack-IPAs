

#include <stdio.h>

void le_imprime_3_ordenado() {

    int num1, num2, num3;

    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num2 > num3) {
            printf("%d %d %d", num3, num2, num1);
        }
        else if (num3 > num1) {
            printf("%d %d %d", num2, num1, num3);
        }
        else {
            printf("%d %d %d", num2, num3, num1);
        }
    }
    else { 
        if (num1 > num3) {
            printf("%d %d %d", num3, num1, num2);
        }
        else if (num3 > num2) {
            printf("%d %d %d", num1, num2, num3);
        }
        else {
            printf("%d %d %d", num1, num3, num2);
        }
    }


}

int main() {

    le_imprime_3_ordenado();

    return 0;
}
