

#include <stdio.h>

int main(){
    float N, min , max, M;

    scanf("%f", &N);
    scanf("%f", &M);
    min = max= M;
    while(N > 1){
        N-- ;
        float M;
        scanf("%f", &M);
        
        if (M >= max)
            max = M;
        else if (M < min)
            min = M;
    }
    printf("min: %f, max: %f\n", min, max);
return 0;
}