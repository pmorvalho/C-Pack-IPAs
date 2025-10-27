

#include <stdio.h>
#define MAX 100

int main(){
    int i, caracter, res=0;
    char expressao[MAX];
    scanf("%s", expressao);
    char operador = '+';

    for (i=0; expressao[i]!='\0'; i++){
        if (expressao[i]>= '0' && expressao[i] <= '9'){
            caracter= expressao[i] - '0';

            while (expressao[i + 1] >= '0' && expressao[i + 1] <= '9') {
                i++;
                caracter = caracter * 10 + (expressao[i] - '0');
            }

            if (operador == '+') {
                res += caracter;
            } else if (operador == '-') {
                res -= caracter;
            }

        }

        else if (expressao[i] == '+' || expressao[i] == '-') {
            operador = expressao[i];
        }

    }
    printf("%d\n", res);
    return 0;
}