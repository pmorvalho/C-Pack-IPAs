
#include <stdio.h>
#include <assert.h>

int main(){
    int c, soma = 0;

    while ((c = getchar()) != EOF){
        soma = soma + (c - '0');
    }

    if (soma % 9 == 0)
        puts("yes");
    else puts("no");

    return 0;
}
