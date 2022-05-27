#include <stdio.h>
#define MAX 80

int lelinha(char s[])
{
    int i,tam;
    char c;
    for(i=0;i<(MAX-1) && (c=getchar())!= EOF && c !='\n';i++)
    {
        tam++;
        s[i]=c;
    }
    if (c==EOF)
    {
        printf("\n");
    }
    s[i]= '\0';
    return tam;
}

int main()
{
    char s[MAX];
    lelinha(s);
    printf("%s\n",s);
    return 0;
}