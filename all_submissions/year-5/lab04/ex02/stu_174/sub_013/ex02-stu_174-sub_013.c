
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, max = 0;
    int vec[VECMAX];
        
    scanf("%d", &n);
    if(n > VECMAX) return 1;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        if(vec[i] > max) max = vec[i];
    }

    for (int i = 0; i < max; i++) {
        for(int j = 0; j < n; j++) {
            if(vec[j] >= i + 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}