

#include <stdio.h>
#define VECMAX 100

int main(){
    int n;
    int vec[VECMAX];

    for (int v = 0; v < VECMAX; v++){
        vec[v] = 0;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);     
    }

    int ast_num = 0;

    for (int k = 0; k < VECMAX; k++){
        for (int j = 0; j < VECMAX; j++){
            if (vec[k] > j){
                ast_num += 1;
            }
        }
        for (int ast = 0; ast < ast_num; ast++){
            printf("*");
        }
        if (vec[k] != 0){
            printf("\n");
        }
        ast_num = 0;
    }

    return 0;
}