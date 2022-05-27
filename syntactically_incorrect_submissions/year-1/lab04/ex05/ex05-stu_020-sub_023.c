#include <stdio.h>
#define MAX 80

int main()
{
    char s[MAX];
    int c,i,caracteres=0;

    for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        {
            s[i] = c;
            caracteres += 1;
        }
    s[i] = '\0';

    printf("%d\n",caracteres);

    return 0;
}