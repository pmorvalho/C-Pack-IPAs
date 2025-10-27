
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

    
    int MaxValue = 0;
    for(int i = 0; i < n; i++) {
        if(MaxValue < values[i]) {
            MaxValue = values[i];
        }
        }
    
    
    for(int i = MaxValue; i > 0; i--) {
        for(int j = 0; j < n; j++) {
            if(values[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;  
}