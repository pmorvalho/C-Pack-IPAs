#include <stdio.h>


int main(){

    int N;
    float min,max;
    float mintemp,maxtemp;

    
    scanf("%d",&N);

    while(N>0){
       scanf("%f %f", &mintemp, &maxtemp);

       if(mintemp<=min && mintemp<=max){
           min=mintemp;

        } 

        if(maxtemp>=min && maxtemp>=max){
            max=maxtemp;
        }

        printf("min: %f, max: %f\n", min, max);

        N--;
    }

return 0;
}