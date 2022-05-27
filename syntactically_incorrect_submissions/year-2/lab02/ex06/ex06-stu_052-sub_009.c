

#include <stdio.h>

int main(){

    int N, v;
    float min, max, p;

    scanf("%d",&N);
    scanf("%f",&min,&max);
    
    v = 2;

    while(v<=N){
        
        scanf("%d",&p);

        if(p>max){
            max = p;
        }
        if(p<min){
            min = p;
        }
        v++
    }
    printf("min:%f,max:%f\n",min,max);
    return 0;
}