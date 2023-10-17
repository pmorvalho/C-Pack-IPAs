
#include <stdio.h>
int main (){
    int numeros;
    float num_atual,min,max;
    scanf("%d",&numeros);
    scanf("%f",&num_atual);
    numeros-=1;
    max=num_atual;
    min=num_atual;
    while (numeros>0) {
        numeros-=1;
        scanf("%f",&num_atual);
        if (num_atual>max) 
            max=num_atual;
        else if (num_atual<min)
            min=num_atual;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}