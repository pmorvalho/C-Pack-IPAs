#include <stdio.h>

int main(){

    int c, soma;

    soma = 0;
    
    while((c=getchar()) != EOF){
        if (c >= '0' && c<= '9')
            soma += (c - '0');
    }
    
    printf(soma % 9 == 0 ? "yes\n" : "no\n");
    
    return 0;
}