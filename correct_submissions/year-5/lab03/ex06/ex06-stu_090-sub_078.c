

#include <stdio.h>

int main(){
    char c;
    int numero;
    int soma = 0;
    while((c=getchar())){
        if(c==EOF)
            break;
        numero = c - '0';
        soma +=numero;
    }
    if (soma%9==0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}