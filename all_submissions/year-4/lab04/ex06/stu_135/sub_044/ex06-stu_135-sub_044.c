

#include <stdio.h>

#define MAX 80
#define DIFF 'A' - 'a'

int leLinha(char s[]);
void maiusculas(char s[]);

int main()
{
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    return printf("\n") == EOF;
}

void maiusculas(char s[]) {
    int i;

    for (i = 0; s[i] != '\0'; i++)
        printf("%c", ((s[i] >= 'a' && s[i] <= 'z') ? s[i] + DIFF : s[i]));
}

int leLinha(char s[])
{
    int i = 0, c;
    
    while((c = getchar()) != EOF && c != '\n') 
        s[i++] = c;
    s[i] = '\0';

    return i;
}