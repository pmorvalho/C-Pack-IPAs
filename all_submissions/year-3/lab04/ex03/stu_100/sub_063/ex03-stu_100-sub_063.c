

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, max = 0, vec[VECMAX];

    scanf("%d", &n);
    for (i = 0; i < n && i < VECMAX; i++)
    {
        scanf("%d", &vec[i]);
        if (max < vec[i])
        {
            max = vec[i];
        }
        
    }
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vec[j] >= max - i)
            {
                putchar('*');
            } else
                putchar(' ');
        }
        putchar('\n');
        
    }
    
    

    return 0;
}