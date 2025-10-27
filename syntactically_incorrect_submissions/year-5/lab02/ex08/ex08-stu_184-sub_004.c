
#include <stdio.h>

int main(){
    int n;
    float a,sum=0;

    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%f", &a);
        sum+=a;
    }
    printf("%.2f\n", (sum/a));
    return 0;
}