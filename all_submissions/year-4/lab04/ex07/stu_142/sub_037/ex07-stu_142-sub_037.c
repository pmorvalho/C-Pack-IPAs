
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char cs)
{
    int index = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        s[index++] = c;
    }
    s[index] = '\0';
    while ((cs = getchar()) != EOF && c != '\n')
    {
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == cs)
        {
            for (int j = i; j <= index; j++)
                s[j] = s[j + 1];
        }
    }
}
int main()
{
    char str[MAX];
    char c = 'a';
    apagaCaracter(str, c);
    printf("%s\n", str);
    return 0;
}