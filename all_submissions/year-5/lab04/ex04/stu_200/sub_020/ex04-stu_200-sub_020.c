
#include <stdio.h>
#define STRMAX 80
#define SIM 1
#define NAO 0
int main(){
    int cont = 1, tamanho = 0, p = SIM, indicador1, indicador2;
    char s[STRMAX], i;
    scanf("%s",s);
    i = s[0];
    while (i != '\0'){
        i = s[cont];
        cont++;
        tamanho++;
    }
    cont = 0;
    if (tamanho %2 != 0){
        indicador1 = tamanho/2;
        indicador2= indicador1;
    }
    else{
        indicador1 = tamanho/2-1;
        indicador2 = tamanho/2;
    }
    while (indicador1-cont >= 0){
        printf("%d/%d-------%d------\n",indicador1,indicador2,cont);
        if (s[indicador1-cont] != s[indicador2+cont]){
            p = NAO;
            break;
}        
        cont++;
    }
    if (p == SIM)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}