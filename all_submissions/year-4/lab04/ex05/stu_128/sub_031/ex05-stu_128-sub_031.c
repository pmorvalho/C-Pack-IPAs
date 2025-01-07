
#include <stdio.h>
#include <string.h>

int leLinha(char s[])
{
    char c;
    int i=0;
    while ((c=getchar())!= EOF && c!= '\n')
    {
        s[i] = c;
        i++;
    }
    s[i]= '\0';
    printf("%s\n",s);
    return i;
}

int main()
{
    char string[100];
    leLinha(string);
    return 0;
}