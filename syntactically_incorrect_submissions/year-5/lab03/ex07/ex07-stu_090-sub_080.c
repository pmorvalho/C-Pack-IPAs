

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c;
    int soma = 0;
    int subtracao = 0;
    int acumulador =0;
    char *str = malloc(sizeof(char));
    char *str_temp = NULL;
    str[0] = '\0';
    int resultado = 0;
    int flag_resultado = 0;
    int flag_fim = 0;

    while((c=getchar())){
        
        if (acumulador == 0 && soma == 0 && subtracao == 0 && flag_resultado == 1){
            acumulador+= resultado;
            resultado=0;
        }

        else if(c==' ' && flag_resultado==1){
            flag_resultado = 0;
            continue;
        }

        if (soma==1 && flag_resultado==1){
            acumulador+= resultado;
            soma = 0;
            resultado=0;
        }
        else if (subtracao==1 && flag_resultado==1){
            acumulador-= resultado;
            subtracao = 0;
            resultado=0;
        }

        if (c=='+'){
            soma=1;
            continue;
        }
        else if (c=='-'){
            subtracao=1;
            continue;
        }

        else if(c==' ' && flag_resultado==1){
            flag_resultado = 0;
            continue;
        }

        else if(c==' ' && flag_resultado==0){
            for (int i = 0; str[i] != '\0'; i++) {
            resultado = resultado * 10 + (str[i] - '0');
            }
            for (int i = 0; str[i] != '\0'; i++) {
                str[i] = '\0';
            }
            flag_resultado = 1;
            continue;
        }
        else if(c=='\n' && flag_resultado==0){
            for (int i = 0; str[i] != '\0'; i++) {
            resultado = resultado * 10 + (str[i] - '0');
            }
            for (int i = 0; str[i] != '\0'; i++) {
                str[i] = '\0';
            }
            flag_resultado = 1;
            flag_fim =1;
            continue;
        }
        if (flag_fim==1)
            break;
        else{
        str_temp = realloc(str, (strlen(str) + 2)*sizeof(char));
        str = str_temp;
        str[strlen(str)] = c;
        str[strlen(str) + 1] = '\0';
        }
    }
    printf("%d\n", acumulador);
    return 0;
}