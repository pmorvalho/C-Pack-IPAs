
#include <stdio.h>
#define VECMAX 100


int main() {
    int n, v[VECMAX];
    scanf("%d", &n);

    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
    }

   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < v[i]; ++j) {
            printf("*");
        }
        printf("\n"); 
    }
    
    return 0;
}
