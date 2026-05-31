
#include <stdio.h>
int main() {
    int i=1, N=0;
    float min, max, tmp;
    max=min;
    do {
        scanf("%f",&tmp);
        min= tmp<min?tmp:min;
        max = tmp>max?tmp:max;
    }while(i++ < N);
    printf("min: %f, max: %f\n",min,max);
    return 0;
}

