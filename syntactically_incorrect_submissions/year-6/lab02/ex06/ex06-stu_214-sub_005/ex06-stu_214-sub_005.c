
#include<stdio.h>
int main(){
    int n;
    float max, min, k;
    scanf("%d", &n);
    scanf("%f", &max);
    min=max;
    for (int i = 1; i < n; i++) {
        scanf("%f", &k);
        if (k>max) {
            max=k;
        }
        else if (k<min) {
            min=k;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}