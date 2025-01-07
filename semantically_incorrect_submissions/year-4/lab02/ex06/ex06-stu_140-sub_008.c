
#include <stdio.h>
int main(){
    int size,counter=1;
    float current,max,min;
    scanf("%d",&size);
    scanf("%f",&current);
    min=current;
    max=current;
    for(;counter<size;counter++){
        scanf("%f",&current);
        if (current>max)
            max=current;
        if (current<min)
            min=current;
        
    }
    printf("min: %3.6f, max; %3.6f\n",min,max);
    return 0;
}