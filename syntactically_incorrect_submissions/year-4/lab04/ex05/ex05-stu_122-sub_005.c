
#include <stdio.h>
#define MAX 100
int leLinha(char s[])
{
    int c, count = 0;

    while((c = getchar()) != EOF)
    {
        s[count++] = c;    
    }
    s[count] = '\0';

    return count;
}
int main ()
{
    char linha[MAX];
    int tam = leLinha(linha);
    printf("%s\n%d\n", linha,tam);
}