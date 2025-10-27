
#include <stdio.h>

int main(){
    int N, i;
    float min, max, valor;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        scanf("%f", &valor);
        if(i == 1){
            min = valor;
            max = valor;
        }

        else if(valor <= min)
            min = valor;
        
        else if(valor >= max)
            max = valor;
    }

    printf("min: %f, max: %f\n", min, max);
    
    return 0;
}