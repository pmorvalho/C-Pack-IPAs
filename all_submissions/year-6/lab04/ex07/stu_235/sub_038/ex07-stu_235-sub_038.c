

#include <stdio.h>

int lelinha(char s[])
{
    char c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main ()
{
    char linha[80];
    char c;
    int i = 0, j;
    lelinha(linha);
    c = getchar();

    while(linha[i] != '\0')
        if (linha[i] == c)
        {
            for(j = i; linha[j] != '\0'; j++)
                linha[j] = linha[j+1];
        }
        else
            i++;
            
    printf("%s\n", linha);
    return 0;
}