#include <stdio.h>

int main(){
    int n, i, counter = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0)
            counter++;
    }

    printf("%d\n", counter);
    return 0;
}