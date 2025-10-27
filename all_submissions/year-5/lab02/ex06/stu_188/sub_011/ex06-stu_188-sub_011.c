
#include <stdio.h>

int main(){
    int N,i;
    float max, min;
    scanf("%d", &N);
    float numeros[N]; 
    
    for(i=0;i<N;i++){
        scanf("%f", &numeros[i]); 
    }
    max=numeros[0];
    min=numeros[0];

    for(i=0;i<N;i++) 
                    
    {   
        if (numeros[i]>max){
            max=numeros[i];
        }else if (numeros[i]<min){
            min=numeros[i];
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0; 
}
