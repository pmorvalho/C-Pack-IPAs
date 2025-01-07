
#include <stdio.h>

void piramide(int N);

int main()
{   
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}

void piramide(int N)
{
    int espacos = (N-1)*2;
    int meio = 1;
    for(int i= 0; i<N; i++) 
    {
        for (int k = 0; k < espacos; k++) 
        {
            printf(" ");
        }

        for(int start=1; start <= meio; start++) 
        {
            printf("%d ",start);
        }

        for(int j = meio-1; j>= 1; j--) 
        {
            printf("%d ",j);
        }
        for (int k = 1; k < espacos; k++) 
        {
            printf(" ");
        }

        printf("\n");
        meio++;
        espacos = espacos -2;
    }
}