
#include <stdio.h>

int main(){
    int num1, num2, maior, menor;

    scanf("%d%d", &num1, &num2);
    if (num1 > num2){
        maior = num1;
        menor = num2;
    }
    else {
        maior = num2; 
        menor = num1;
    }
    printf("%d\n%d\n", menor, maior);
    return 0;
}
