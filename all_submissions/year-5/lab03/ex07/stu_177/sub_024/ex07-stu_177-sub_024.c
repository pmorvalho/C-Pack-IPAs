
#include <stdio.h>

#define MAIS 1
#define MENOS 2

int main(){
    int c, n = 0, operacao = 0, soma = 0;
    while((c = getchar()) != EOF){
        if(c>='0' && c<='9'){
            n = (n*10) + c - '0';
        }
        else if(c == '+')
            operacao = MAIS;
        else if(c == '-')
            operacao = MENOS;
        else if(c == ' '){
            if(operacao == MAIS || operacao == 0)
                soma += n;
            else if(operacao == MENOS)
                soma -= n;
            n = 0;
        }
        else if(c == '\n'){
            if(operacao == MAIS)
                soma += n;
            else if(operacao == MENOS)
                soma -= n;
        }
    }
    printf("%d\n", soma);
    return 0;
}