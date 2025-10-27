

#include <stdio.h>
#define MAX 100

int main(){
    int caracter, res=0;
    char C;
    char operador = '+';

    while ((C=getchar()) != '\n'){

        if (C >= '0' && C <= '9'){

            caracter = C - '0';

            while ((C=getchar())>= '0' && (C) <= '9') {
                caracter = caracter * 10 + (C - '0');
            }

            if (operador == '+') {
                res += caracter;
            }
            else if (operador == '-') {
            res -= caracter;
            }
        }
    
        else if (C == '+' || C == '-') {
            operador = C;
        }
    }
    printf("%d\n", res);
    return 0;
}