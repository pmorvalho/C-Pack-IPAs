#include <stdio.h>
#define MAX 80

void maior(char s1[], char s2[],int tam1,int tam2)
{
    int i;
    if (tam1==tam2)
    {
        for (i=0;i<tam1;i++)
        {
            if (s1[i]>s2[i])
            {
                printf("%s\n",s1);
                return;
            }
            else if (s2[i]> s1[i]) 
            {
                printf("%s\n",s2);
                return;
            }
        }
    }
    else
    {
        if (tam1 >tam2)
        {
            printf("%s\n",s1);
        }
        else
        {
            printf("%s\n",s2);
        }
    }
}
int tamanho(char s[])
{
    int i,tam=0;
    for(i=0;i<(MAX-1) && s[i] !='\0';i++)
    {
        tam++;
    }
    return tam;
}

int main()
{
    char s1[MAX],s2[MAX];
    int tam1,tam2;
    scanf("%s%s",s1,s2);
    tam1=tamanho(s1);
    tam2=tamanho(s2);
    maior(s1,s2,tam1,tam2);
    return 0;
}