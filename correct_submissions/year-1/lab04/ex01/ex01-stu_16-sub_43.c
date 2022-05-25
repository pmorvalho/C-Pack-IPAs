#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, vector[VECMAX];
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < n; i++) {
        j = 0;
        while(j < vector[i]) {
            printf("*");
            j++;
        }
        printf("\n");
    }
    
    return 0;
}
