
#include <stdio.h>

#define VECMAX 100

int maxVector(int v[], int n){
    int max = v[0], i;
    for (i = 1; i < n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int main(){
    int n, v[VECMAX], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int maior = maxVector(v, n);

    for (int altura = maior; altura > 0; altura--){
        for (int j = 0; j < n; j++){
            if (v[j] >= altura){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}