
#include <stdio.h>

#define MAX 100

void apagaCaracter(char s[], char c)
{
    int i, diff = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[i-diff] = s[i];
        }
        else
        {
            diff++;
        }   
    }
    s[i-diff] = '\0';
}

int main()
{
    char s[MAX], c;
    int i;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++)   
    {
        s[i] = c;
    } 
    s[i] = '\0';
    c = getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}