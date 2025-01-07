
#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, vec[VECMAX], i, j, max;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    
    max = vec[0];
    for (i = 0; i < n;i++) {
        if (vec[i] > max)
            max = vec[i];
    }

    for (i = max; i > 0; i--) {
        for (j = 0; j < n; j++)
            printf("%c", (vec[j] >= i ) ? '*' : ' ');
        printf("\n");
    }


    return 0;
}