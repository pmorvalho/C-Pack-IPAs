
#include <stdio.h>
#define MAX 80

void readLine(char s[]);
void uppercase(char s[]);

int main()
{
    char s[MAX];
    readLine(s);
    uppercase(s);

    printf("%s\n", s);
    return 0;
}

void readLine(char s[])
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

void uppercase(char s[])
{
    int ascii_jump = 'a' - 'A';
    
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == ' ')
            continue;

        if (s[i] < 'A' || s[i] > 'Z')
            s[i] = s[i] - ascii_jump;
    }
}