
#include <stdio.h>
#include <string.h>
#define MAX 80

void maiusculas (char s[])
{
    int i, tam = strlen(s);
    for (i = 0; i < tam; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] += ('A' - 'a');
    }
    printf("%s\n",s);
}

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
    char s[MAX];
    leLinha(s);
    maiusculas(s);
}

