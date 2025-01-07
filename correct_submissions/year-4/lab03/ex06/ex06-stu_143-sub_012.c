

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){

    char s[MAX];
    int comprimento, i;
    long soma = 0;
    scanf("%s", s);

    comprimento = strlen(s);

    for(i = 0; i < comprimento; i++)
        soma += s[i] - '0';

    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");


    return 0;
}