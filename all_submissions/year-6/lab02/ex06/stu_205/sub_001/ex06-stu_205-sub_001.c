
#include <stdio.h>
int main(){
    int n, i=1;
    double min, max, new;
    scanf("%d", &n);
    scanf("%lf", &max);
    min = max;
    while (i!=n){
        scanf("%lf", &new);
        if (new>max) max = new;
        else if (new<min) min = new;
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
return 0;
}