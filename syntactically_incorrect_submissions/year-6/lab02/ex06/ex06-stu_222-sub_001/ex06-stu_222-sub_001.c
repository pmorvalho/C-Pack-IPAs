
#include <stdio.h>

int main()  {
    int n;
    double max, min, val;
    scanf("%d", &n);
    scanf("%lf", &max);
    min = max;
    n--;
    while(n>0){
        scanf("%lf", &val);
        if (val>max) {
            max=val;
        }
        else if (val<min) {
            min=val;
        }
        n--;
    }
    printf("min:%lf max:%lf\n", min, max);
    return 0;
}