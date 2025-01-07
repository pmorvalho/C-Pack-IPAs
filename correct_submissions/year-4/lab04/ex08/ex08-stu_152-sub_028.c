
#include <stdio.h>
#include <string.h>

#define MAX 101

void numeros(char n1[], char n2[]){
    char c;
    int i = 0, troca = 0;

    while ((c = getchar()) != '\n' && c != EOF){
        if (c == ' '){
            n1[i] = '\0';
            troca = 1;
            i  = -1;
        }
        else if( troca == 0)
            n1[i] = c;

        else
            n2[i] = c;

        i++;
    }
    n2[i] = '\0';
}

int main(){
    char n1[MAX], n2[MAX];
    int maior;

    numeros(n1,n2);

    maior = strcmp(n1,n2);

    if (maior >= 0)
        printf("%s\n",n1);
    else
        printf("%s\n",n2);

    return 0;
}