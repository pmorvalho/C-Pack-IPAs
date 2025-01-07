
#include <stdio.h>
#define MAX 80

void readLine(char s[MAX]);
void uppercase(char s[MAX]);

int main()
{
    char s[MAX];
    readLine(s);
    uppercase(s);

    printf("%s\n", s);
    return 0;
}

void readLine(char s[MAX])
{
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s[i] = c;
        i++;
    }
    s[++i] = '\0';
}

void uppercase(char s[MAX])
{
    for (int i = 0; s[i] != '\0'; ++i)
    {
        int ascii_jump = 'a' - 'A';

        if (s[i] < 'A' || s[i] > 'Z')
            s[i] = s[i] - ascii_jump;
    }
}