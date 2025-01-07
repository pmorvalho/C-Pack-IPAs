
#include <stdio.h>
#define ZERO 48
#define NOVE 57

int main(){
    char c, opr, ant;
    int num, soma, n_l, i;
    num = soma = n_l =  0;
    opr = ant = '0';
    c = ' ';
    for (i = 0 ; c != '\n'; i++){
        c = getchar();
        if (c >= ZERO && c <= NOVE){
            num *= 10;
            num += (c - '0');
        }
        else if(ant >= ZERO && ant <= NOVE && (c == ' ' || c == '\n')){
            ++n_l;
            if (n_l < 2 && i <= 2){
                soma = num;
            }
            else if (n_l == 2){
                n_l = 1;
                if (opr == '-'){
                    soma -= num;
                }
                else if (opr == '+'){
                    soma += num;
                } 
            }
        }           
        else if(c == '+' || c == '-'){
            opr = c;
            num = 0;
        }
        ant = c;
    }    
    printf("%d\n", soma);
    return 0;
}