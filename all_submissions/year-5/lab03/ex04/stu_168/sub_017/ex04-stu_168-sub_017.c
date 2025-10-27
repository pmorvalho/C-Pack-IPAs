
#include <stdio.h>
#define FORA 0
#define DENTRO 1

int main(){
    int c,zeros=FORA,digito=FORA;
    while((c=getchar())!=EOF){
        if(c>='0'&& c<='9'){
            if(c=='0')
                zeros=DENTRO;
            if(c!='0'|| (c=='0'&& digito)){
                digito=DENTRO;
                zeros=FORA;
                putchar(c);
            }
        }
        else{
            digito=FORA;
            if(zeros)
                printf("0%c",c);
            else
                printf("%c",c);
        }
    }
    return 0;
}   