
#include <stdio.h>

int main(){
    int N;
    float min, max, n;
    
    scanf("%d",&N);
    scanf("%f",&n);
    
    min = max = n;

    while (--N > 0){
        scanf("%f",&n);

        if (n < min){
            min = n;
        }
        if (n > max){
            max = n;
        }
        
    }

    printf("min: %f, max: %f\n",min, max);

    return 0;
}