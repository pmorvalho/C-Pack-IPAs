#include <stdio.h>

int main() {
    int n,i,div;
    div = 0;
    scanf("%d", &n);
    for ( i = 1; i <= n; ++i){
        if ((n % i) == 0) 
            div += 1;
    }
    printf("%d\n", div);
    
    return 0;
}