


#include <stdio.h>

int main(){

    int n, VECMAX = 100;

    if(scanf("%d", &n)!= 1 || n >= VECMAX) return 1;

    int vet[n];

    for(int num = 0; num <n; num++){
        scanf("%d", &vet[num]);
    }

    for(int num = 0; num < n; num ++){
        int n = num;
        for(int num= 1; num<= vet[n]; num++){
            printf("*");
        }
        printf("\n");
    }
}