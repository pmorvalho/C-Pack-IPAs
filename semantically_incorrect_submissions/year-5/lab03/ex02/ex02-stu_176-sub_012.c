
#include <stdio.h>

void piramide(int N){
    int num, tab, linhas = N - 1, max;

    while (linhas >= 0){
        
        for (tab = linhas; tab >= 1; tab--){
            printf("  "); 
        }

        
        for (num = 1; num <=  N - linhas; num++){
                printf("%d ", num);
                max = num;
        }

        
        for (num = max - 1; num > 1; num--){
            printf("%d ", num);
        }

        
        if (max != 1){printf("1\n");}

        
        else {printf("\n");}

        linhas--;
    }
}

int main(){
    int n;

    scanf("%d", &n);
    piramide(n);
    
    return 0;
}