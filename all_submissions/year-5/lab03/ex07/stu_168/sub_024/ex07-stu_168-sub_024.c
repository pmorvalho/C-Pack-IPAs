
#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){
    int c,res=0,num=0;
    int operador=DENTRO, espaco=FORA;
    while((c=getchar())!='\n'){
        if (c=='+'){
            operador=DENTRO;}
        else if(c=='-'){
            operador=FORA;}
        else if(c>='0' && c<='9'){
            espaco=FORA;}
        else if(c== ' ' && !espaco){
            espaco=DENTRO;
            if (operador)
                res+=num;
            else
                res-=num;
            num=0;
        }
        if (!espaco){
            num=num*10 +(c-'0');
        }
    }
    if (operador)
        res+=num;
    else
        res-=num;
    num=0;
    
    printf("%d\n",res);
    return 0;
}
