

#include <stdio.h>

void piramide(int n){
    
    for (int num =1; num <= n; num++){
        
        for (int space = n - num; space!= 0; space--){
            printf("  ");
        }

        for( int N = 1; N != num; N++){
            printf("%d ", N);
        }

        printf("%d",num);

        if (num == 1){}

        else{
            for( int N = (num-1); N !=0 ; N--){
                printf(" %d", N);
                }
        }

        for (int space = n - num; space!= 0; space--){
            printf("  ");
        }

        printf("\n");
    }
}

int main(){

    int n;    

    if (scanf("%d", &n)!= 1 || n<2) return 1;

    piramide(n);
    return 0;

}