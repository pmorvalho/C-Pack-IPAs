
#include <stdio.h>

int main(){
    int estado, chara_ant, chara;
    estado = 0;
    chara = getchar();
    while (chara != EOF){
        if (estado == 0 && chara == '"'){
            estado = 1;
        }
        else if (estado == 1 && chara == '"'){
            if (chara_ant == '\\'){
                printf("%c", chara);
            }
            else{
                printf("\n");
                estado = 0;
            }
            }
        else if(chara != '\\' && estado == 1){
            printf("%c", chara);
        }
        else if(chara == '\\' && chara_ant == '\\' && estado == 1){
            printf("%c", chara);
        }
        chara_ant = chara;
        chara = getchar();
    }
    return 0;
}