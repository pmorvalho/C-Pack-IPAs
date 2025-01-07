
#include <stdio.h>

#define VECMAX 100

int main()
{
    int i,n,j, vec[VECMAX];
    int max_valor = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] > max_valor) {
            max_valor = vec[i];
        }
    }

    i = max_valor;

    while (i > 0) {
        for ( j = 0; j < n; j++) {
            if (vec[j] != 0) 
            {
                printf("*");
                --vec[j];
            } else 
            {
                printf(" ");
            }
        }
        printf("\n");
        i--;
    }
    return 0;
}
