
#include <stdio.h>
#define VECMAX 100
int main () {
    int vec[VECMAX], n,i,allzero=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&vec[i]);
    }
    while(allzero!=n){
        allzero=0;
        for (i=0;i<n;i++){
            if (vec[i]>0){
                printf("*");
                vec[i]--;
                if (vec[i]==0)
                    allzero++;
                }
            else{
                printf(" ");
                allzero++;
            }
            
        }
        printf("\n");
    }
    return 0;
}
