
#include <stdio.h>

int main(){
    int n, contador = 1;
    float num;
    scanf("%d", &n);
    scanf("%f", &num);

    float max = num;
    float min = num;

    while(contador < n){
        scanf("%f", &num);
        if (num < min) min = num;
        if (num > max) max = num;
        contador +=1;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
