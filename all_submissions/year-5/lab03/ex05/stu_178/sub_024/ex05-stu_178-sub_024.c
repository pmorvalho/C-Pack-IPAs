
#include <stdio.h>

int main(){
    int estado, chara_ant, chara, doublebarra, barracounter;
    estado = 0;
    chara = getchar();
    doublebarra = 0;
    barracounter = 0;
    while (chara != EOF){
        if (estado == 0 && chara == '"'){
            estado = 1;
            barracounter = 0;
            doublebarra = 0;
        }
        else if (estado == 1 && chara == '"'){
            if (chara_ant == '\\' && (barracounter % 2 == 0 || barracounter == 0)){
                printf("%c", chara);
                barracounter = 0; 
                doublebarra = 0;
            }
            else{
                printf("\n");
                estado = 0;
                barracounter = 0; 
                doublebarra = 0;
            }
            }
        else if(chara != '\\' && estado == 1){
            printf("%c", chara);
            barracounter = 0; 
            doublebarra = 0;
        }
        else if(chara == '\\' && chara_ant == '\\' && doublebarra == 0){
            doublebarra = 1;
            barracounter++;
            printf("%c", chara);
        }
        else if(chara == '\\' && chara_ant == '\\' && doublebarra == 1){
            doublebarra = 0;
            barracounter++;
        }
        chara_ant = chara;
        chara = getchar();
    }
    return 0;
}