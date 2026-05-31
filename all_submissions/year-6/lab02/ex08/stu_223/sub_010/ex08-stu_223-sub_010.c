
#include <stdio.h>
int main() {
    int n, i;
    float v, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%f", &v);
        sum += v;
    }
    printf("%.2f\n", sum/n);
    return 0;
}