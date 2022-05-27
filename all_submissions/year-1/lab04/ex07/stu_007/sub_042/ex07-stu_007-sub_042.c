#include <stdio.h>

#define MAX 80

int leLinha(char s[]);
void apagaCaracter(char s[], char c);

int main()
{
    char s[MAX];
    int c;

    leLinha(s);
    c = getchar();

    apagaCaracter(s, c);
    printf("%s\n", s);

    return 0;
}


int leLinha(char s[])
{
    int counter, c;

    counter = 0;
    while (counter < 79 && ((c = getchar()) != EOF) && (c != '\n'))
    {
        s[counter] = c;
        ++counter;
    }
    s[counter] = '\0';

    return counter;
}

void apagaCaracter(char s[], char c)
{
    int i;
 
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            s[i] = ' ';
        }
        ++i;
    }
 }
