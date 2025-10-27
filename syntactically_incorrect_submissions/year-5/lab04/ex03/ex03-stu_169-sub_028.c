



#include <stdio.h>
#define VECMAX 100

int main() {
    int n, m = 0, v[VECMAX]; 

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);

        if (v[i] > m) 
            m = v[i];
    }

    for (int j = m; j > 0; j--) {
        for (int i = 0; i < n; i++) {
            if (v[i] >= j)
                printf("*");
            
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
