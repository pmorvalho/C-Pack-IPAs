

#include <stdio.h>
#define VECMAX 100

int main(){
    int n;
    int vec[VECMAX];

    for (int v = 0; v < VECMAX; v++){
        vec[v] = 0;
    }

    scanf("%d", &n);
    int max = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        if (vec[i] > max){
            max = vec[i];
        }     
    }

    for (int k = 0; k < max; k++){
        for (int j = 0; j < n; j++){
            if (vec[j] >= max){
                printf("*");
            }
            else{
                printf(" ");
            }
            vec[j] += 1;
        }
        printf("\n");
    }

    return 0;
}