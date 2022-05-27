#include <stdio.h>



int main() {
    int N, Contador = 1, D=0;
    scanf("%d", &N);
    
    while (Contador <= N) {
        if (N % Contador == 0){
            D++;
        }
        Contador++;
    }
    printf("%d\n", D);
    return 0;
}