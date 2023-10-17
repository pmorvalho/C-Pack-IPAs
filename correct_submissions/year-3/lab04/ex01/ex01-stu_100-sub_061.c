

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, vec[VECMAX];

    scanf("%d", &n);
    for ( i = 0; i < n && i < VECMAX; i++)
        scanf("%d", &vec[i]);
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < vec[i]; j++)
        {
            if (j == vec[i] -1)
                printf("*\n");
            else            
                printf("*");
        }
    }
    

    return 0;
}