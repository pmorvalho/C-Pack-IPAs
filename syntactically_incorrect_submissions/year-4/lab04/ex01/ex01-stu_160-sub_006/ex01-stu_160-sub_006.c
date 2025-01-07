
#include <stdio.h>
#define VEC_MAX 100

int main(){
    int n = VEC_MAX +1;
    int x;

    while(n>VEC_MAX){
        scanf("%d", &n);
    }

    for(int i =0; i<n;i++){
        scanf("%d",&x);
        for(int j=0; j<x;j++){
            printf("*");
        }
        printf("\n");
    }
}