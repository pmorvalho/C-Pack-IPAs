
#include <stdio.h>

int main(){
    char chara, operador;
    int numero_atual, res, primeiro_num;
    primeiro_num = 0;
    res = 0;
    chara = 0;
    numero_atual = 0;
    while(chara != '\n'){
        chara = getchar();
        if (chara == '1'){
            numero_atual = numero_atual*10 + 1;
        }
        else if (chara == '2'){
            numero_atual = numero_atual*10 + 2;
        }
        else if (chara == '3'){
            numero_atual = numero_atual*10 + 3;
        }
        else if (chara == '4'){
            numero_atual = numero_atual*10 + 4;
        }
        else if (chara == '5'){
            numero_atual = numero_atual*10 + 5;
        }
        else if (chara == '6'){
            numero_atual = numero_atual*10 + 6;
        }
        else if (chara == '7'){
            numero_atual = numero_atual*10 + 7;
        }
        else if (chara == '8'){
            numero_atual = numero_atual*10 + 8;
        }
        else if (chara == '9'){
            numero_atual = numero_atual*10 + 9;
        }
        else if (chara == '0'){
            numero_atual = numero_atual*10;
        }
        else if (chara == ' ' && primeiro_num == 0){
            res += numero_atual;
            primeiro_num = 1;
            numero_atual = 0;
            chara = getchar();
            operador = chara;
            chara = getchar();
        } 
        else if (chara == ' ' && primeiro_num == 1){
            if(operador == '+'){
                res += numero_atual;
                numero_atual = 0;
            }
            else if(operador == '-'){
                res -= numero_atual;
                numero_atual = 0;
            }
            chara = getchar();
            operador = chara;
            chara = getchar();
        }
    }
    if(operador == '+'){
        res += numero_atual;
        }
    else if(operador == '-'){
        res -= numero_atual;
    }
    printf("%d\n", res);
    return 0;
}
