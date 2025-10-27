
#include <stdio.h>

int main(){
    int c, soma;
    char sim[] = "yes", nao[] = "no";
    while((c = getchar()) != EOF){
        soma += (c - '0');
    }
    if(soma%9 == 0)
        printf("%s\n", sim);
    else
        printf("%s\n", nao);
    return 0;
}