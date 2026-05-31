
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j;
    scanf("%d", &n);
    int tab[n];
    for(i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < tab[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}