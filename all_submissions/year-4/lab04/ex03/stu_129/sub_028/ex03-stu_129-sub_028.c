
#include <stdio.h>

#define VECMAX 100

int main()
{
    int i, j, max, n, num[VECMAX];
    scanf("%d", &n);
    max = 0;
    if(n < VECMAX) {
        for(i = 0; i < n; i++) {
            scanf("%d", &num[i]);
            if(num[i] > max)
                max = num[i];
        }
        for(i = max; i > 0; i--) {
            for(j = 0; j < n; j++) {
                if(i <= num[j])
                    putchar('*');
                else
                    putchar(' ');
            }
            putchar('\n');
        }
    }
    return 0;
}