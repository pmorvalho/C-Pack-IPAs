
#include <stdio.h>

int main(){
    float Dado, Dado_2, min, max;
    int N, N_aux;
    N_aux = 1;

    
    scanf("%d", &N);
    scanf("%f", &Dado);

    max = min = Dado;

    
    while (N_aux < N) {
        scanf("%f", &Dado_2);

       
        if (Dado_2 > max) {
            max = Dado_2;
        } else if (Dado_2 < min) {
            min = Dado_2;
        }

        N_aux += 1;
    }

    
    printf("min: %f, max: %f\n", min, max);

    return 0;
}