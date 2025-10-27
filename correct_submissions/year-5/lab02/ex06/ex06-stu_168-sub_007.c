
#include <stdio.h>

int main(){
    int N,i;
    float num,max,min;
    scanf("%d",&N);
    scanf("%f",&num);
    min=max=num;

    for(i=1;i<N;i++){
        scanf("%f",&num);
        if(num<min)
            min=num;
        if (num>max)
            max=num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}