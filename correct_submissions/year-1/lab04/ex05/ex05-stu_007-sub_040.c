#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
    char s[MAX];

    leLinha(s);
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
