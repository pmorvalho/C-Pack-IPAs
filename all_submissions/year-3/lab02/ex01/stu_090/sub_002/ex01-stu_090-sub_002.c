

#include <stdio.h>

int main(void) {

    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3)
        printf("%d\n", num1);
    else if(num2 > num1 && num2 > num3)
        printf("%d\n", num2);
    else if(num3 > num1 && num3 > num2)
        printf("%d\n", num3);
    else
        printf("nenhum número é maior do que os outros dois\n");
    return 0;
}