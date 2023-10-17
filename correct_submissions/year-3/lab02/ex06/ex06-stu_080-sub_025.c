
#include <stdio.h>
int main(){
    int i,n;
    float r, min, max;
    scanf("%d",&n);
    for (i= 0; i < n; i++){
        scanf("%f",&r);
        if (i == 0){
            min = r;
            max = r;
        }
        if (r > max)
            max = r;
        if ( r< min)
            min = r;
    }
    printf("min: %f, max: %f\n",min, max);
    return 0;
}