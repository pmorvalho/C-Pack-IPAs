
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define MAX 100



int main()
{
    int i, num = 0, estado = FORA;
    char s[MAX];

    for (i = 0; i < MAX || s[i] == EOF; i++)
        s[i] = getchar();
    
    s[i] = '\0';
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '\\')
        {
            if (s[i+1] == '\"')
                putchar('\"');
            if (s[i+1] == '\\')
                putchar('\\');
            i+= 1;
        }
        if (s[i] == '\"' && s[i-1] != '\\')
        {    
            estado = DENTRO;
            num ++;      
            if (num % 2 == 0)
            {    
                estado = FORA;
                printf("\n");
            }
        }
        if (s[i] != '\"' && estado == DENTRO && s[i] != '\\')
            putchar(s[i]);
        i++;
    }
    return 0;
}
