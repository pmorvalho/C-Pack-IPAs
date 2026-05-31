

#include <stdio.h>


int main(){
    int num1, num2;
    char signal;

    scanf("%d %c %d", &num1, &signal, &num2);
    if (signal == '+'){
        num1 += num2;
    }
    else if (signal == '-'){
        num1 -= num2;
    }


    while (scanf(" %c %d", &signal, &num2) == 2){
        if (signal == '+'){
            num1 += num2;
        }
        else if (signal == '-'){
            num1 -= num2;
        }
    }
    printf("%d\n", num1);
    return 0;
}