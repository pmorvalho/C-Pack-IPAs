
#include <stdio.h>

int main(){
    int num, soma = 0, digit;
    scanf("%d", &num);
    while (num != 0){
        digit = num % 10;
        soma += digit;
        num /= 10;
    }
    if (soma % 9 == 0)
        printf("yes\n");
    
    else
        printf("no\n");
    
    return 0;
}