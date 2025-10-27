
#include <stdio.h>

int main(){
    int chara, zeroflag, chara0;
    chara = getchar();
    while (chara != EOF){
        zeroflag = 0;
        while (chara != ' ' && chara != EOF){
            zeroflag = 1;
            while (chara == '0'){
                chara0 = chara;
                chara = getchar();
            }
            while (chara != ' ' && chara != EOF){
                printf("%c", chara);
                chara = getchar();
                zeroflag = 0;
            }
            if (zeroflag == 1){
                printf("%c", chara0);
            }
        }
        if (chara != EOF){
            printf("%c", chara);
            chara = getchar();
        }
    }
    return 0;
}