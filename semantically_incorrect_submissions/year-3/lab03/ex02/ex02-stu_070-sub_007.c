
#include <stdio.h>

void piramide(int n)
{
    int i, j; 
    for(j = 1; j <= n; j++){
        for(i = j - n + 1; i <= j; i++){
            if (i < 1){
                printf("  ");  
            }
            else{
                printf("%d ", i);
           }     
        }
        for(i = j - 1; i >= j - n + 2; i--){
            if (i < 1){
                printf("  ");  
            }
            else{
                printf("%d ", i);
           }
        }
        if (j - n + 1 < 1){
                printf(" \n");  
            }
            else{
                printf("%d\n", i);
           }
    }   
}

int main()
{
    int n;
    
    scanf("%d", &n);
    piramide(n);
    return 0;
}