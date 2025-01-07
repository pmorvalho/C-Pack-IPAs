
#include <stdio.h>

int main(){
    int zero=0, vazio=1;
    char ch;

    ch = getchar();
    while(ch != EOF){
        if ((ch == ' ') || (ch == '\n')){
            if(vazio == 1)
                continue;
            else{
                vazio = 1;
                printf(" ");
            zero = 0;
                }
        }
        else if (ch == '0'){
            zero = 1;
            if (vazio == 0)
                printf("0");
        }
        else {
            printf("%c",ch);
            zero = 0;
            vazio = 0;
        }
    ch = getchar();
    }
return 0;
}