#include <stdio.h>

int main()
{
    int N;
    int M;
    printf("Insira um inteiro N e outro inteiro M\n");
    scanf("%d%d",&N,&M);
    {
        if (N > M) {
            printf("%d\n%d\n",N,M);
        }
        else {
            printf("%d\n%d\n",M,N);
        }
    }
    return 0;
}