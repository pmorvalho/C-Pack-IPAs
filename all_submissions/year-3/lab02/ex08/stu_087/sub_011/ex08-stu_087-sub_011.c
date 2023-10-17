
#include <stdio.h>

int main(){

    int numValues, i;
    float n, sum;

    scanf("%d", &numValues);

    for(i = 0; i < numValues; i++){
        scanf("%f", &n);
        sum += n;
    }

    printf("%.2f\n", sum/numValues);

    return 0;
}