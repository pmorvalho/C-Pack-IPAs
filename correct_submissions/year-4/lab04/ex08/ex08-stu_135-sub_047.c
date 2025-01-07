
#include <stdio.h>
#include <string.h>

#define MAX 100
#define STRING1 1
#define STRING2 2

int main()
{
    char s1[MAX], s2[MAX];
    int len, i, maior = STRING1;

    scanf("%s %s", s1, s2);
    len = strlen(s1); 
    for (i = 0; i < len; i++) {
        if (s1[i] > s2[i])
            maior = STRING1;
        if (s1[i] < s2[i])
            maior = STRING2;
    }

    return printf("%s\n", ((maior == STRING1) ? s1: s2)) == EOF;
}