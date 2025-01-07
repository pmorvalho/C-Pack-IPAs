
#include <stdio.h>
#include <string.h>

#define DIM 100

void apagaCaracter(char s[], char c)
{
    int n = strlen(s);
    for (int i=0;i<n;i++)
    {
        if (s[i]!= c) putchar(s[i]);
    }
    printf("\n");
}

int main()
{
    char c;
    char s[DIM];
    int i = 0;
    char j;
    while ((c=getchar())!= EOF && c!= '\n')
    {
        s[i]= c;
        i++;
    }
    s[i]= '\0';
    scanf("%c",&j);
    apagaCaracter(s,j);
    return 0;
}