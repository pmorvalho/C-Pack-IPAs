

#include<stdio.h>

int main(){
    int soma=0, numero;
    char c;
    c = getchar();

    while(c != '\n'){
        numero = c-'0';      
        soma += numero;
        c = getchar();
    }
    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}