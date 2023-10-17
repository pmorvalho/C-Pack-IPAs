
#include <stdio.h>

int main()
{
    int N = 0;
    int i = 1, contador = 1;

    scanf("%d", &N);

    while(i < N){
        if( (N % i) == 0)
            contador ++;
        i ++;
    }

    printf("%d\n", contador);

    return 0;
}