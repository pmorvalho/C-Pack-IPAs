#include <stdio.h>

#define VECMAX 100

int main() {

    int V[100];    
    int N; 
    int M = 0;
    int i;

    scanf("%d", &N);

    for(i = 0; i <= N - 1; i++) {
        
        scanf("%d", &V[i]);
        if (V[i] > M){
            M = V[i];
        } 
    }
    
    for (M = M; M != 0 ; M--) {

        for (i = 0; i <= N - 1; i++) {
            
            if (V[i] == 0) {
                putchar(' ');
            }
            if (V[i] != 0) {
                putchar('*');
            }

            if (i == N - 1) {
                putchar('\n');
            }

            V[i] = (V[i] == 0) ? V[i] : V[i] - 1;
        }

    }

    return 0;
}