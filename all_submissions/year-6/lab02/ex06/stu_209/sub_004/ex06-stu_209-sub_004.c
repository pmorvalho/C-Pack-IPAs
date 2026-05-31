

#include <stdio.h>

int main(){

    int i=1,N;
    float min,max,temp;
    scanf("%d %f",&N,&min);
    max=min;
    while(i++<N){
        scanf("%f",&temp);
        if (temp<min){
            min=temp;
        }
        else if(temp>max){
            max=temp;
        }
        }
    printf("min: %f, max: %f\n", min, max);
return 0; 
}