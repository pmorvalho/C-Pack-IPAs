
#include <stdio.h>

void cruz(int N)
{
    int Linhas=1;
    int Colunas=1;
    while (Linhas<=N)
    {
        while (Colunas<=N)
        {
            if (Colunas==Linhas)
            {
                printf(" *");
            }
            else if (Colunas==N-Linhas+1)
            {
                printf(" *");
            }
            else
            {
                printf (" -");
                
            }
            Colunas++;
        }
        printf(" \n");

        Linhas++;
        Colunas=1;
    }
}




int main()
{
    int N;
    scanf ("%d",&N);
    cruz(N);
    return 0;
}


