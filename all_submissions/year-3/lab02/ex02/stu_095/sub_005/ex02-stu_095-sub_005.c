

#include <stdio.h>
int main()
{
    int N, M, maior;
    printf("Introduza um valor inteiro:\n");
    scanf("%d", &N);
    printf("Introduza outro valor inteiro:\n");
    scanf("%d", &M);
    if(N>M)
    {
        printf("%d\n", M);
        printf("%d", N);
    }
    else
    {
        printf("%d\n", N);
        printf("%d", M);
    }
    return 0;
}