
#include <stdio.h>

int main(){

    int i, n, numDivs;
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if(n%i == 0){
            numDivs++;
        }
    }

    printf("%d\n", numDivs);

    return 0;
}