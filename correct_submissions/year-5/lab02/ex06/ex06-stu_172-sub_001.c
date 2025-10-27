
#include <stdio.h>

int main() {
    float n1, min, max;
    int i,N;
    scanf("%d",&N);
    scanf("%f", &n1);
    min = n1;  max = n1;

    for ( i = 1; i<N;++i){
        scanf("%f", &n1);
        if (n1>max)
            max = n1;
        if (n1<min)
            min = n1;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
        
    