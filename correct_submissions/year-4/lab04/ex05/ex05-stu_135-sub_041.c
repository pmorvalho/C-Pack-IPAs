
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
    char s[MAX];

    leLinha(s);
    

    return printf("%s\n", s) == EOF;
}

int leLinha(char s[])
{
    int i = 0, c;
    
    while((c = getchar()) != EOF && c != '\n') 
        s[i++] = c;
    s[i] = '\0';

    return i;
}