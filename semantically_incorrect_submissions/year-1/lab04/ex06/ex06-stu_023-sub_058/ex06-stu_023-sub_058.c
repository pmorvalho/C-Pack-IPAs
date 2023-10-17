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
void maiusculas(char s[])
{
    int i;
    for(i=0;s[i]!= '\0'; i++)
    {
        if(s[i]>='a' && s[i]<= 'z')
        {    
            s[i]= (s[i]-'a')+'A';
        }
    }
    printf("%s\n",s);
}

int main()
{
    char s[MAX];
    lelinha(s);
    maiusculas(s);
    return 0;
}