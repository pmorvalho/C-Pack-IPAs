

#include <stdio.h>

#define VECMAX 100

int main (){
    int vec[VECMAX], n, i, c, l, max = 0;
    scanf("%d", &n);
    while (n >= VECMAX || n <= 0)
        scanf("%d\n", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        if (vec[i] > max)
            max = vec[i];
    }    
    for (l = 0; l < max ; l++){
        for (c = 0; c < n; c++){
            if (vec[c] > l) 
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}