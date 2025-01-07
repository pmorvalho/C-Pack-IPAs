
#include <stdio.h>
#define MAX 80

int leLinha (char s[])
{
    int n;
    for(int i = 0; i < MAX; i++)
    {
        if (s[i] == '\n' || s[i] == EOF)
            break;
        else if (s[i] == ' ')
            continue;
        n++;
    }
    printf("%d", n);
    return n;
}



int main()
{
    char linha[MAX];
    int i = 0;
    while(1)
    {
        scanf("%c", &linha[i]);
        if(linha[i] == EOF || linha[i] == '\n')
            break;
        i++;
    }

    leLinha(linha);
    printf("%s", linha);


    return 0;
}