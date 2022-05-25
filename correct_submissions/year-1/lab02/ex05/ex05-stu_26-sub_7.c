#include <stdio.h>

int main(){
    int n, i;
    i = 1;
    scanf("%d", &n);
    while(i <= n){
        printf("%d\n", i);
        ++i;
    }
    
    return 0;
}