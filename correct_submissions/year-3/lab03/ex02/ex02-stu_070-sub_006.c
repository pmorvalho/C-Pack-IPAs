
#include <stdio.h>

void piramide(int n)
{
    int i, j; 
    for(j = 1; j <= n; j++){
        for(i = j - n + 1; i <= j - 1; i++){
            if (i < 1){
                printf("  ");  
            }
            else{
                printf("%d ", i);
           }     
        }
        for(i = j; i >= 2; i--){
            printf("%d ", i);
        }
    printf("1\n");
    }      
}

int main()
{
    int n;
    
    scanf("%d", &n);
    piramide(n);
    return 0;
}