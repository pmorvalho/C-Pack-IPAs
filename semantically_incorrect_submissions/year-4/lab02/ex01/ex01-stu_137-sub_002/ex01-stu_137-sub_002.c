
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int num1, num2, num3, max;
    printf("Introduza 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;
    if(num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    printf("%d\n", max);
    return 0;
}