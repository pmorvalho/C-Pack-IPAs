
#include <stdio.h>

int main(){

    int i, numAmmount;
    float n, min, max;

    scanf("%d", &numAmmount);
    scanf("%f", &n);
    max = n;
    min = n;

    for(i = 1; i < numAmmount; i++){
        scanf("%f", &n);
        if (n > max){
            max = n;
        }
        if (n < min){
            min = n;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}