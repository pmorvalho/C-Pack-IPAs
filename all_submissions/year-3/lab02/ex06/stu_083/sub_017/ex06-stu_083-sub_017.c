
#include <stdio.h>

int main(){
    int q,i;
    float max;
    float min;
    float current;
    i=1;
    scanf("%d",&q);
    scanf("%f",&max);
    min=max;
    i++;
    while(i++<=q){
        scanf("%f",&current);
        if (max<current)
        {
            max=current;
        }
        else if (min>current)
        {
            min=current;
        }     
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}