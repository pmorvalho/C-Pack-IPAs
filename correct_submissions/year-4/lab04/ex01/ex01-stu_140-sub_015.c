
#include <stdio.h>
#define VECMAX 100
int main () {
    int vec[VECMAX], n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&vec[i]);
    }
    for (i=0;i<n;i++){
        for (;vec[i]>0;vec[i]--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}