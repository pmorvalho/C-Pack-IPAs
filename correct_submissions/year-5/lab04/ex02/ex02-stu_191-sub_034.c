
#include <stdio.h>
#define VECMAX 100

int max(int a, int b){
    return  (a>b) ? a:b;
}

int main (){
    int a[VECMAX], n, i, maxi, j;

    scanf("%d", &n);

    for (i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; ++i){
        maxi = max(a[i], a[i+1]);
    }

    for (i=0; i<maxi; ++i){
        for (j=0; j<n; ++j){
            if(a[j]>i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}