#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, max = 0, vector[VECMAX];
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
        if(vector[i] > max) max = vector[i];
    }

    for(i = 0; i < max; i++) {
        for(j = 0; j < n; j++) {
            if(i < vector[j]) {
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
