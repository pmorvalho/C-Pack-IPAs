
#include <stdio.h>
#include <string.h>

#define MAX 100

void imprime(char s[])
{
    int i, flag = 0;
    for(i = 0; s[i] != '\0' && i < (int) strlen(s); i++){
        if(s[i] != '0' || flag) {
            putchar(s[i]);
            flag = 1;
        }
    }
    if(flag == 0)
        putchar(s[0]);
}

int main()
{
    int c, i = 0;
    char numero[MAX];
    while((c = getchar()) != '\n') {
        if(c == ' ' || c == '\n'){
            numero[i] = '\0';
            imprime(numero);
            putchar(' ');
            i = 0;
        }
        else {
            numero[i] = c;
            i++;
        }
    }
    numero[i] = '\0';
    imprime(numero);
    putchar('\n');
    return 0;
}