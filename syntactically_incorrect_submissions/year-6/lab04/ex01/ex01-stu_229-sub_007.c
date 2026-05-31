
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, m, lista[VECMAX];
    n < VECMAX;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &j);
        lista[i] = j;
    }
    for(i = 0; i < n; i++){
        j = lista[i];
        m = 0;
        while(m < j){
            printf("*");
            m++;
        }
        printf("\n");
    }
    return 0;
}
