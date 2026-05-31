
#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c);

int main()
{
    char c;
    char s[MAX];
    int n = 0, i = 0;

    fgets(s, MAX, stdin);
    scanf("%c", &c);

    apagaCaracter(s, c);
    printf("%s", s);

    return 0;
}

void apagaCaracter(char s[], char c)
{
    int i = 0, j = 0;

    while (s[i] != '\n')
    {
        if (s[i] != c)
            s[j++] = s[i];
        i++;
    }
    s[j] = '\n', s[j + 1] = '\0';
}