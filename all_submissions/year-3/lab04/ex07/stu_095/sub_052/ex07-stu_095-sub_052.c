

#include <stdio.h>
#include <string.h>
#define MAX 100

void apagaCaracter(char s[], char c)
{
    int i, j;
    for (i=0, j=0; s[i]!='\0'; i++)
    {
        if (s[i]!=c)
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}

int main()
{
    char s[MAX], c;
    fgets(s, MAX, stdin);
    scanf("%c", &c);
    getchar(); 
    apagaCaracter(s,c);
    printf ("%s\n", s);
    return 0;
}