
#include <stdio.h>

int main(){
    int n, cont;
    cont = 1;
    scanf("%d", &n);
    while (cont <= n){
        printf("%d\n", cont);
        cont++;
    }
    return 0;
}