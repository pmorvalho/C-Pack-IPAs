
#include <stdio.h>
#define VECMAX 100

int main (){
    int a[VECMAX], n, i;

    scanf("%d", &n);

    for (i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; ++i){
        while (a[i]>0){
            printf("*");
            --a[i];
        }
        printf("\n");
        
    }

    return 0;
}