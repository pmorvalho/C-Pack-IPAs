
#include <stdio.h>

int main(){

    int n, i;
    float sum = 0;
    float add;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%f", &add);
        sum += add;
    }

    printf("%.2f\n", sum / i);

    return 0;
}