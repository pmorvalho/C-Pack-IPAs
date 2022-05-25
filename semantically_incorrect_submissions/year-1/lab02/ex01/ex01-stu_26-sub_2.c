#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Insira três inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("%d\n", num1);
    } else if(num2 > num1 && num2 > num3){
        printf("%d\n", num2);
    } else{
        printf("%d\n", num3);
    }

    return 0;
}