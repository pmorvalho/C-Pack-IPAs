#include <stdio.h>

int main(){
    float avg, num, sum;
    int n, n_aux;
    scanf("%d", &n);
    n_aux = n;

    while(n_aux>0){
        scanf("%f", &num);
        sum += num;
        n_aux--;
    }

    avg = sum / n;
    printf("%.2f\n", avg);
    return 0;
}