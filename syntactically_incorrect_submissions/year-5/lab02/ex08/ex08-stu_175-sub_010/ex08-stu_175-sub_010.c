
#include <stdio.h>

int main (){
    int n;
    float num;
    float sum = 0;
    scanf("%d", &n);
    int ncopy = n;
    for(; n; n--){
        scanf("%f", &num);
        sum += num;
    }
    sum = sum/ncopy;
    printf("%.2f\n", sum);
}