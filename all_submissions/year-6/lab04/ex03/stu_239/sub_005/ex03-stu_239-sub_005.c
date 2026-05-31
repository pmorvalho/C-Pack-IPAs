

#include <stdio.h>

#define VECMAX 100

int main(){
    int n, max = -1;
    int vec[VECMAX];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        if (vec[i] > max) max = vec[i];
    }

    for (int i = max; i > 0; i--){
        for (int j = 0; j < n; j++){
            
            if (vec[j] >= i) printf("*");

            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}