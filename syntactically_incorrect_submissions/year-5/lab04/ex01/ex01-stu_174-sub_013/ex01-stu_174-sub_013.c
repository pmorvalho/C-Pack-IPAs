
#include <stdio.h>

#define VECMAX 100

int main() {
    int n;
    int vec[VECMAX];
        
    scanf("%d", &n);
    if(n > VECMAX) return 1;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        for(int j = 0; j < vec[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}