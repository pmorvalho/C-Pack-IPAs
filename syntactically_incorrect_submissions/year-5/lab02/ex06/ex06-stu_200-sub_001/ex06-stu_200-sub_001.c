
#include <stdio.h>
int main(){
    int q,cont=0;
    float temp;
    scanf("%d",&q);
    scanf("%f",&temp);
    float max = temp, min = temp;
    while (cont++ < q-1){
        scanf("%f",&temp);
        if (temp>max)
            max = temp;
        if (temp < min)
            min = temp;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}