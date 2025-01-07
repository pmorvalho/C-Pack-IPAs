
#include <stdio.h>

int main(){
    int n, i;
    i = 1;
    
    printf("Introduza um numero inteiro:\n");
    scanf("%d", &n);

    while(i <= n){
        printf("%d\n", i);
        i++;
    }
    return 0;
}