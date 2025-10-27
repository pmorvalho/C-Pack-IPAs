
#include <stdio.h>


int main(){
    int n;
    double min,max,a;

    scanf("%d", &n);
    scanf("%lf", &a);
    min=max=a;
    for (int i=1;i<n;i++){
        scanf("%lf", &a);
        if (a<min)min=a;
        if (a>max)max=a;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}