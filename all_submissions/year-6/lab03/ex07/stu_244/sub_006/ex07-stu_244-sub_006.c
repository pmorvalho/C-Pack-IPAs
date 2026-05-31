
#include <stdio.h>

int leInteiro(int valor) {
    int c = getchar();
    while (c >= '0' && c <= '9'){
        valor = valor*10+(c-'0');
        c = getchar();
    }
    return valor;
}

 int main() {
    int c, op = '+', resultado = 0, valor = 0;
    c = getchar();
    while (c!='\n' && c!=EOF){
        if (c >= '0' && c <= '9'){
            valor = (c-'0');
            valor = leInteiro(valor);
            if (op=='+')
                resultado +=valor;
            else
                resultado -=valor;
        }
        else if (c=='+'|| c=='-')
            op=c;
        c = getchar(); 
    }
    printf("%d\n", resultado);
    return 0;
 }