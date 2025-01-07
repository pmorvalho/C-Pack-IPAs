
#include <stdio.h>

void quadradro(int N)
{
    for(int i = 1; i <= N; i++) {
        for(int j = i; j < N + i; j++) {
            printf("%d", j);
            if(j < N + i - 1)
                putchar('\t');
        }
        putchar('\n');
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    if(N >= 2)
        quadradro(N);
    return 0;
}