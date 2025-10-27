
#include <stdio.h>

void piramide(int N);

int main(){
    int n;
    
    scanf("%d", &n);
    piramide(n);

    return 0;
}


void piramide(int N){
    
    int row, espacos, col;

    
    for (row=1; row<=N; row++){
        
        
        for (espacos=0; espacos<N-row; espacos++){
            printf("  ");
        }

        
        for (col=1; col<row; col++){
            printf("%d ", col);
        }
        
        
        printf("%d", row);

        
        for (col=row-1; col>0; col--){
            printf(" %d", col);
        }

        
        printf("\n");

    }
}