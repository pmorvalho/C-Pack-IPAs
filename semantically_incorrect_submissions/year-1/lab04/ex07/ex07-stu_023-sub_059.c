#include <stdio.h>
#define MAX 80

void lelinha(char s[])
{
    int i;
    char c;
    for(i=0;i<(MAX-1) && (c=getchar()) !='\n';i++)
    {
        s[i]=c;
    }
    s[i]= '\0';
}

void apagacaracter(char s[], char c)
{
    int i;
    for(i=0;s[i]!= '\0';i++)
    {
        if (s[i]==c)
        {
            s[i]=' ';
        }
    }
    printf("%s\n",s);
}
int main()
{
    char s[MAX],c;
    lelinha(s);
    scanf("%c",&c);
    apagacaracter(s,c);
    return 0;
}