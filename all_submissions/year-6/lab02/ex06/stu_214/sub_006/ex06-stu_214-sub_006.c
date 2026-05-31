
#include<stdio.h>
int main(){
    int n, i=2;
    float max, min, k;
    scanf("%d", &n);
    scanf("%f", &max);
    min=max;
    while (i<=n) {
        scanf("%f", &k);
        if (k>max) {
            max=k;
        }
        else if (k<min) {
            min=k;
        }
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}