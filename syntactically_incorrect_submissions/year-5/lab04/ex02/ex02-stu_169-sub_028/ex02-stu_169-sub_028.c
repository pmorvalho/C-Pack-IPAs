

#include <stdio.h>
#define VECMAX 100

int main() {
    int n, linhas = 0, v[VECMAX]; 

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);

        if (v[i] > linhas) 
            linhas = v[i];

    }

    for (int a = 0; a < linhas; a++) { 
        for (int i = 0; i < n; i++) { 
            if (v[i] > a) 
                printf("*");

            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}


