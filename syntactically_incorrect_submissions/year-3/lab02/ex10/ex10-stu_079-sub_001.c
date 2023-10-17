
#include <stdio.h>

int main(){
    int num1_ex10, num_digitos_ex10, soma_digitos_ex10 = 0;
    scanf("%d", num1_ex10);
    while (num1_ex10 > 0){
        soma_digitos_ex10 += num1_ex10 % 10;
        num_digitos_ex10 += 1;
    }
    printf("%d\n", num_digitos_ex10);
    printf("%d", soma_digitos_ex10);

    return 0;
}