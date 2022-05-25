#include <stdio.h>

int main(){
    int n, i, cont;
    cont = 0;
    scanf("%d", &n);
    for(i = 1; i <= n / 2; ++i){
        if (n % i == 0){
            ++cont;
        }
    }
    printf("%d\n", cont + 1);
    return 0;
}