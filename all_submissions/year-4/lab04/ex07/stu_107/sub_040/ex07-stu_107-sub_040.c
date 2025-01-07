
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c)
{
    for(int i = 0; i < MAX; i++)
    {
        if(c == s[i])
        {
            s[i] = ' ';
        }
        else if (s[i] == '\n' || s[i] == EOF)
        {
            break;
        }
    }
}


int main()
{
    char linha[MAX], c;
    int i = 0;
    while(1)
    {
        scanf("%c", &linha[i]);
        if(linha[i] == EOF || linha[i] == '\n')
            break;
        i++;
    }
    scanf("%c", &c);

    apagaCaracter(linha, c);
    printf("%s", linha);


    return 0;
}