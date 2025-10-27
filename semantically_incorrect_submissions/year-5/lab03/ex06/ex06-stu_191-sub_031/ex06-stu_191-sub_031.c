
#include <stdio.h>

int main(){
    int c;
    long int soma = 0;

    c=getchar();

    while (c!='\n'){
        soma += c-'0';
        c = getchar();
    }

    if(soma%9==0){
        printf("yes\n");
    } else {
        printf("no\n");
    } 
    return 0;

}