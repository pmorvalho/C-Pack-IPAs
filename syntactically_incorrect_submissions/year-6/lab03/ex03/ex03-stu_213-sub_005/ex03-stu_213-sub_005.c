

#include <stdio.h>

void cruz(int num){
    int linha, coluna;
    for (linha = 1; linha <= (num / 2); linha++)
        {
        for (coluna = 1; coluna <= (num / 2); coluna++)
        {
            if (coluna == linha)
                printf("*");
            else
                printf("-");
            if (coluna != (num / 2))
                printf(" ");
        }   
        for (coluna; coluna <= num; coluna++)
        {
            if (coluna == (num + 1 - linha))
                printf(" *"); 
            else
                printf(" -");
        }
        printf("\n");    
        }
    for (linha; linha <= num; linha++)
        {
        for (coluna = 1; coluna <= (num / 2); coluna++)
        {
            if (coluna == (num + 1 - linha))
                printf("*");
            else
                printf("-");
            if (coluna != (num / 2))
                printf(" ");
        }   
        for (coluna; coluna <= num; coluna++)
        {
            if (coluna == linha)
                printf(" *"); 
            else
                printf(" -");
        }
        printf("\n");    
        }
}

int main() {
    int num;

    scanf("%d", &num);
    cruz(num);
    return 0;
}