

#include <stdio.h>
#define MAX 80

int leLinha(char str[])
{
    int i=0, c;
    while((c=getchar())!=EOF && c!='\n')
    {
        str[i++]=c;
    }
    str[i]='\0';
    return i;
}

void maiusculas(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        if (s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-('a'-'A');
        }
        i++;
    }
}

int main()
{
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;    
}