
#include <stdio.h>

int main(){
    int N;
    int N_aux = 1;

    scanf("%d", &N);

    while (N_aux <= N){
        printf("%d\n", N_aux);
        N_aux += 1;
    }
    return 0;
}