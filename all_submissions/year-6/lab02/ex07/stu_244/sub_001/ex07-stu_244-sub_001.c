
#include <stdio.h>
int main(){
    int n, div, i;
    i = 1;
    div = 0;
    scanf("%d", &n);
    while(i<=n){
        if(n%i==0)
            div ++;
        i ++;
    }
    printf("%d\n", div);
    return 0;
}