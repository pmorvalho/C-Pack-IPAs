
#include <stdio.h>


void cruz(int N);

int main(){
    int n;

    scanf("%d", &n);
    cruz(n);

    return 0;
}

void cruz(int N){
    int row, col;

    
    for (row=0; row<N; row++){
        for (col=0; col<N; col++){
            
            if (col==row || col==((N)-row-1)){
                printf("*");
            } else {
                printf("-");
            }
        }
        
        printf("\n");
    }
}