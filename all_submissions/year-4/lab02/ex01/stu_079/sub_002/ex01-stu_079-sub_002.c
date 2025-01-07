

#include <stdio.h>

void maior_1() {
    int num1, num2, num3;

    
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2) {
        if(num2 < num3) {
            printf("%d", num3);
        }
        else {
            printf("%d", num2);
        }
    }
    else {
        if (num1 < num3) {
            printf("%d", num3);
        }
        else {
            printf("%d", num1);
        }
    }
}

void maior_2() {

    int num1, num2, num3, res;

    scanf("%d%d%d", &num1, &num2, &num3);

    res = num1 > num2 ? num1 : num2;
    res = res > num3 ? res : num3;

    printf("%d\n", res);
}

int main() {

    maior_2();
    
    return 0;
}