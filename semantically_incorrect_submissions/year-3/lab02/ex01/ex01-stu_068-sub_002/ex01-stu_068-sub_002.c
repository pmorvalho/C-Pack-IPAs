
#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3)
        printf("%d é o maior numero", num1);
    else if (num1 < num2 && num2 > num3)
        printf("%d\n é o maior numero", num2);
    else if (num3 > num1 && num3 > num2)
        printf("%d\n é o maior numero", num3);

    return 0;
    }
