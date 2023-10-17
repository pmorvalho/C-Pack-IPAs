

#include <stdio.h>

void quadrado(int N){
    int l, c;
    for (l = 0; l < N; l++){
        for (c = 0; c < N; c++)
        {
            printf("%d\t", l+c+1);
        }
        printf("\n");
    }    
    
}

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 2)
    {
        quadrado(N);
    }
    return 0;
}

