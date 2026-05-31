

#include <stdio.h>

int main(){

    int n;
    double val,max,min;

    scanf("%n",&n);

    scanf("%lf",&val);
    min=max=val;
    n--;

    while (n>0){
        scanf("%lf",&val);
        if (val>max)
            max=val;
        else if (val<max)
            min=val;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}