
#include <stdio.h>
#define MAX 100

int somaDig(char numero[]){
    int soma,i;
    for(i=0;char numero[i];i++){
        soma+=numero[i]-"0";
    }
return soma;
}

int divisiel_9(char numero[]){
    if(numero[0]=="\0")
        return 0;
    return somaDig(numero%9==0);
}

int main(){
    char str[MAX+1];
    scanf("%s",str);
    printf("%s\n",divisiel_9(str)?"yes":"no");
return 0
}