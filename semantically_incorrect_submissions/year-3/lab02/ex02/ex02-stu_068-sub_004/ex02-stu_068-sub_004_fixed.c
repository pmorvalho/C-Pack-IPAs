

#include <stdio.h>

int main(){

    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
        printf("%d\n%d", num2, num1);
    
    else
        printf("%d\n%d", num1, num2);
    printf("\n");
    return 0;
}
