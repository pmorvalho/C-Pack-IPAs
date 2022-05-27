#include <stdio.h>
#define VECMAX 100

void escreve(int vec[VECMAX],int num)
{
    int i,cont;
    for(i=0; i<num;i++)
    {
        for(cont=1;cont<=vec[i];cont++)
        {
            printf("*");
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