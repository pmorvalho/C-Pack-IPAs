
#include <stdio.h>

void cruz(int n)
{
    int i, j; 
    for(j = 1; j <= n; j++){
        for(i = 1; i < n; i++){
            if (i == j || i == n - j + 1){
                printf("* ");  
            }
            else{
                printf("- ");
            }
        }
        if (i == j || i == n - j + 1){
            printf("*\n");  
        }
        else{
            printf("-\n");
        }
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
    cruz(n);
    return 0;
}