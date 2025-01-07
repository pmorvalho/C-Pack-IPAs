
#include <stdio.h>

#define VECMAX 100

int main()
{
    int i, j, n, num[VECMAX];
    scanf("%d", &n);
    if(n < VECMAX) {
        for(i = 0; i < n; i++)
            scanf("%d", &num[i]);
        for(i = 0; i < n; i++) {
            for(j = 0; j < num[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
    return 0;
}