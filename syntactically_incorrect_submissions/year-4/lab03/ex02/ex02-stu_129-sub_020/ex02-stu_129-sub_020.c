
#include <stdio.h>

void piramide(int N)
{
    int espacos = N, linha = 1;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j < espacos; j++)
            printf("  ");
        if(linha == 1)
            printf("%d", 1);
        else {
            for(int j = 1; j <= linha; j++)
                printf("%d ", j);
        }
        for(int j = linha - 1; j >= 1; j--){
            printf("%d", j);
            if(j > 1)
                putchar(' ');
        }
        putchar('\n');
        linha++;
        espacos--;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    if(N >= 2)
        piramide(N);
    return 0;
}