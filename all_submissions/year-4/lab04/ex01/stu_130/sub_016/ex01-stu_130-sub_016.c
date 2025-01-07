

#include <stdio.h>

#define VMAX 100

int main(){
    int n = 0, tab[VMAX], u = 0;

    for (; n >= 100 || n <= 0;){
        scanf("%d", &n);
    }
    
    for (int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n ; i++){
        for ( u = tab[i]; u > 0 ; u--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}