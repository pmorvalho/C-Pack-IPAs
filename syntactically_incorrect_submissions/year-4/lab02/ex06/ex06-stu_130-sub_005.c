

#include <stdio.h>

int main(){
    int q = 0, i = 0;
    float num, max, min;

    scanf("%d", &q);
    if (q >= 0){
        scanf("%f", &num );
        min = max = num;
    }
    for(; i < q - 1 ; i++){
        scanf("%f", &num);
        if (num > max)
            max = num;
        else if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);
}