
#include <stdio.h>
#define VECMAX 100

int main(){
    int n,i,j,grafico[VECMAX];
    scanf("%d",&n);
    if (n >= VECMAX)
        return 1;
    for(i=0;i<n;i++)
        scanf("%d",&grafico[i]);

    for(i=0;i<n;i++){
        for(j=0;j<grafico[i];j++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}