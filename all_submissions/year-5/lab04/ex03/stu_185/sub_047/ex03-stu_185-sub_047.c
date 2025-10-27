


#include <stdio.h>
#define VECMAX 100
int main(){
    int n, i ,j, max;
    int tab[VECMAX];
    scanf("%d", &n);
    if (n <= 0 || n >= VECMAX) return 1;
    
    for(i = 0; i < n; i++){
        scanf("%d", &tab[i]);
        if (tab[i] < 0) return 1;
    }

    max = tab[0];
    for(i = 1; i < n; i++){
        if (tab[i] > max) max = tab[i];
    }

    for(i = max; i > 0; i--){
        for(j = 0; j < n; j++){
            if (tab[j] >= i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}