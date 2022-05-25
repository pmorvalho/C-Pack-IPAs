#include <stdio.h>
#define MAX 80


int tamanho  (char s[])
{
    int i,tam=0;
    for (i=0; i<(MAX-1) && s[i]!= '\0';i++)
    {
        tam++;
    }
    return tam;
}

void palindromo(char s[])
{
    int tam,i;
    tam = tamanho(s);
    tam--;
    for(i=0; i<(tam/2); i++)
    {
        if (s[i] != s[tam-i])
        {
            printf("no\n");
            return;
        }
    }
    printf("yes\n");
}

int main()
{
    char s[MAX];
    scanf("%s",s);
    palindromo(s);
    return 0;
}