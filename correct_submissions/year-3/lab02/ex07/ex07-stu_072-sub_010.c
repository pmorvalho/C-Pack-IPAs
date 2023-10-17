

#include <stdio.h>

int main(){

    int n, i=0, divs=0;
    scanf("%d", &n);

    while (i++, i <= n){
        if (n % i == 0){
            divs++;
        }
    }

    printf("%d\n", divs);
    return 0;
}