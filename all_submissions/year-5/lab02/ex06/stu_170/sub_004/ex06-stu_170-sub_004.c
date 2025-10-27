
#include <stdio.h>
#include <float.h>

int main(){
    int n;
    float x, min = FLT_MAX, max = -FLT_MAX;
    scanf("%d", &n);
    while (n--){
        printf("%d", n);
        scanf("%d", &x);
        if (x<min) min=x;
        if (x>max) max=x;
    }
    printf("min: %d, max: %d\n");
    return 0;
}