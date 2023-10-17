

#include <stdio.h>

int main(){

    int N, v;
    float min, max, p;

    scanf("%d",&N);
    scanf("%f",&min,&max);
    
    for(v=2,v<=N,v++){
        scanf("%d",&p);

        if(p>max){
            max = p;
        }
        if(p<min){
            min = p;
        }
    }
    printf("min:%f,max:%f\n",min,max);
    return 0;
}