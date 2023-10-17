
#include <stdio.h>
#define DIM 100

void printast(int vet[],int size){
    int i,k;
    for ( i = 0; i < size; i++)
    {
        for ( k = 1; k <= vet[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }    
}

int main(){
    int n, i, vec[DIM];
    scanf("%d",&n);
    for ( i = 0; i < n && i<DIM ; i++)
    {
        scanf("%d",&vec[i]);
    }
    printast(vec,n);
    return 0;
}