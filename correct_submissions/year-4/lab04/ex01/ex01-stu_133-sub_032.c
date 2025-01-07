
#include <stdio.h>

#define VECMAX 100

void leLinha(int n, int vec[]);
void mostraGrafico(int n, int vec[]);

int main() {
    int n = 0, vec[VECMAX];

    scanf("%d", &n);
    while (n <= 0 && n >= VECMAX) {
        scanf("%d", &n);
    }
    leLinha(n, vec);
    mostraGrafico(n, vec);
    return 0;
}

void leLinha(int n, int vec[]) {
    int i = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
}

void mostraGrafico(int n, int vec[]) {
    int i = 0, j = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < vec[i]; j++) {
            printf("*");
        }
        printf("\n");
    }    
}