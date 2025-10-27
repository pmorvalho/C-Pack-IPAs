
#include <stdio.h>

void cruz(int N)
{
    int linha, coluna;

    for (linha = 0; linha < N; linha ++){
        for (coluna = 1; coluna <= N; coluna++){

            
            if (coluna == linha + 1 || coluna == N - linha){
                if (coluna != N) printf("* ");
                else printf("*");}

            
            else if (coluna != N) printf("- ");

            else printf("-");
        }

        
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    cruz(n);

    return 0;
}