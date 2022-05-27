#include <stdio.h>
#define VECMAX 100

void escreve(int vec[VECMAX],int num)
{
    int i,linha,linhas=vec[0];
    for (linha=0;linha<linhas; linha++)
    {
        for(i=0; i<num;i++)
        {
            if (vec[i]>linhas)
            {
                linhas = vec[i];
            }
            if (vec[i]!=0 && linha<vec[i])
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
int main()
{
    int cont,n,vec[VECMAX];
    scanf("%d",&n);
    for (cont=0;cont<n;cont++)
    {
        scanf("%d",&vec[cont]);
    }
    escreve(vec,n);
    return 0;
}