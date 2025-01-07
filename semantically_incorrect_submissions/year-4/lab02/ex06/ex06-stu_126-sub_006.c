
#include <stdio.h>

int main(){
    float Dado,Dado_2, min, max;
    int N, N_aux;
    N_aux=1;
    
    scanf("%d", &N);
    scanf("%f", &Dado);

    max=min=Dado;

    while(N_aux< N){
        scanf("%f", &Dado_2);

        if (Dado_2 > Dado){
            max = Dado_2,
            Dado_2 +=1;
        }else {
            min = Dado_2,
            Dado_2 +=1;
        }
    }
    
    printf("min: %f, max: %f\n", min, max);

    return 0;
}