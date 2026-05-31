
#include <stdio.h>
int main(){

    int n, VECMAX = 100, max = 0;

    if(scanf("%d", &n)!= 1 || n >= VECMAX) return 1;

    int vet[n];

    for(int num = 0; num <n; num++){
        scanf("%d", &vet[num]);
        if( vet[num]> max)max = vet[num];
    }

    for(int num = max;num!=0; num--){
        int col = num;
        for(int num = 0; num < n; num++){
            if(vet[num]>= col) {printf("*");}
            else {printf(" ");}
        }
        printf("\n");
    }
}