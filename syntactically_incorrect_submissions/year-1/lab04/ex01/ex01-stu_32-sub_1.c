#include <stdio.h>

#define VECMAX 100

int main(){
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n && n<VECMAX; i++){
        scanf("%d", &x);
        for(int j=0; j<x; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}