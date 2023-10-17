
#include <stdio.h>
#include <math.h>

int main(){

    int n, div, i;

    scanf("%d", &n);

    for(i = 1; i <= ceil(n / 2); i++){
        if((n % i) == 0)
            div++;
    }

    printf("%d\n", div + 1);

    return 0;
}