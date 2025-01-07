
#include<stdio.h>

#define MAX 100

int leLinha(char s[])
{
    int i=0, c;

    for(c = getchar(); c != '\n' && c != EOF; c = getchar())
        s[i++] = c;

    s[i] = '\0';
    return i;    
}

int main()
{
    char linha[MAX];
    int tamanho = leLinha(linha);

    printf("%s\n", linha);
    printf("%d\n", tamanho);

    return 0;    
}