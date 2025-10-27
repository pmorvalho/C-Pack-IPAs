
#include <stdio.h>

int main(){
    int chara, zeroflag;
    zeroflag = 0;
    chara = getchar();
    while (chara!=EOF){
        while(chara != ' '){
            if (chara == EOF){
                break;
            }
            zeroflag = 1;
            while(chara == '0'){
                if (chara == EOF){
                    break;
                }
                chara = getchar();
            }
            while (chara != ' '){
                if (chara == EOF){
                    break;
                }
                zeroflag = 0;
                printf("%c", chara);
                chara = getchar();
            }
        }
        if (zeroflag == 1){
            printf("0");
            zeroflag = 0;
        }
        printf(" ");
        chara = getchar();
    }
    return 0;
}