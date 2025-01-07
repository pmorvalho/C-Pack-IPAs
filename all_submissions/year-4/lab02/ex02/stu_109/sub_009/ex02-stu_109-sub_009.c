
#include <stdio.h>

int main(){
    int n, m;
    
    printf("Introduza dois valores inteiros:\n");
    scanf("%d%d", &n, &m);

    if(n >= m){
        printf("%d\n", n);
    }
    else{
        printf("%d\n", m);
    }

    return 0;
}