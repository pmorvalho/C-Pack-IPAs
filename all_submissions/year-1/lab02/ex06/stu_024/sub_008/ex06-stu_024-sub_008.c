#include <stdio.h>


int main(){

    int i=0;
    int N;
    float min=1000000,max=-1000000;
    float numero;

    
    scanf("%d",&N);

    
    for(i=0;i<N;i++){
        
        scanf("%f",&numero);

        if(numero<=min){
            min=numero;
        }        
        
        if(numero>=max){
            max=numero;
        } 
    }
    
    printf("min: %f, max: %f\n", min, max);

return 0;
}