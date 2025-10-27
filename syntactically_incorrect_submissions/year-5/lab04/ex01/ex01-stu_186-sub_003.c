
#include <stdio.h>

#define VECMAX 100

int main() {
    int n;
    int values[VECMAX];

    scanf("%d", &n);

    if(n < VECMAX && n > 0) {
        for(int i = 0; i < n; i++) {
            scanf("%d", &values[i]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;  
}