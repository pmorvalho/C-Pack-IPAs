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
    int vector_read = 0, vector_write = 0;
    char c2;

    while (s[vector_read] != '\0')
    {
        c2 = s[vector_read];
        if (c2 != c)
        {
            s[vector_write] = c2;
            ++vector_write;
        }
        ++vector_read;
    }
    s[vector_write] = '\0';
 }
