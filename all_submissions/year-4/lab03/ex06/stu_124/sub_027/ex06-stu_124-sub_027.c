
#include <stdio.h>

int main(){
    int soma;
    char num;
    soma  = 0;
    while ((num = getchar()) != EOF && num != '\n'){      
        if (num >= 48 && num <= 57){
            soma += (num - '0');
        }
    }
    if (soma % 9 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;

}