
#include <stdio.h>
#define VECMAX 100
int main(){
    int N, i, j, k, max = 0, vec[VECMAX];
    scanf("%d", &N);
    while(N <= 0 || N > VECMAX){
        scanf("%d", &N);
    }
    i = 0;
    
    for (i = 0; i < N; i++){
        scanf("%d", &vec[i]);
        if (vec[i] > max){
            max = vec[i];
        }    
    }
    for (j = 0; j < max; j++){
        for (k = 0; k < N; k++){
            if (vec[k] > j){
                printf("*");
            }    
        }
        printf("\n");
    }   
    return 0;
}