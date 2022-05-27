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
    return tam;
}

int main()
{
    int tam;
    char s[MAX];
    tam = lelinha(s);
    printf("%s\n",s);
    printf("%d\n",tam);
    return 0;
}