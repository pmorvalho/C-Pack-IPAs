
#include <stdio.h>

int main(){
    int i, n;
    float val, sum=0;

    scanf("%d", &n);
    if(n<=0) return 2;
    for(i=0; i<n; i++) {
        scanf("%f",&val);
        sum+=val;
    }
    printf("%.2f\n", sum/n);

    return 0;
}