#include <stdio.h>


int main(){

    int N;
    float min,max;
    float mintemp,maxtemp;

    
    scanf("%d",&N);
    scanf("%f", &mintemp);
    min=mintemp;
    max=mintemp;
    while(N>1){
      scanf("%f", &mintemp);

       if(mintemp<=min){
           min=mintemp;

        } 

        if(mintemp>=max){
            max=mintemp;
        }

        

        N--;
    }
    printf("min: %f, max: %f\n", min, max);
return 0;
}
