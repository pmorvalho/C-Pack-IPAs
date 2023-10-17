
#include <stdio.h>
#define DIM 100

void printast(int vet[],int size, int max){
    int i,k;
    i=0;
    while (i++<max)
    {
        for ( k = 0; k < size; k++)
        {
            if (vet[k]!=0)
            {
                vet[k]--;
                printf("*");
            }
            else{
                printf(" ");
            }   
        }    
        printf("\n");
    }    
}

int main(){
    int n, i, vec[DIM], max;
    max=0;
    scanf("%d",&n);
    for ( i = 0; i < n && i<DIM ; i++)
    {
        scanf("%d",&vec[i]);
        if (vec[i]>max)
        {
            max=vec[i];
        }
        
    }
    printast(vec,n,max);
    return 0;
}