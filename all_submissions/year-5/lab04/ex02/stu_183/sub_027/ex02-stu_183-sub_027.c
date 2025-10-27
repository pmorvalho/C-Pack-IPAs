

#include <stdio.h> 
#define VECMAX 100

int main() {
    int vec[VECMAX];
    int max = 0, n, i, j, v;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v);
        vec[i] = v;
        if (v > max)
            max = v;
    }
    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (vec[j] > 0) 
                putchar('*');
            else
                putchar(' ');
            vec[j] = vec[j] - 1;
        }
        putchar('\n');
    }

}