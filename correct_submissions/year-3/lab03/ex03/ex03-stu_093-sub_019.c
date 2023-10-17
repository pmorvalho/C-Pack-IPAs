
#include <stdio.h>

void cruz(int dim);

void cruz(int dim){
    int i, j;

    for(i = 1; i <= dim; i++){
        for(j = 1; j <= dim; j++)
            if(i + j == dim + i && (i == 1 || i == dim)) 
                printf("*\n");
            else if(((i - j) == 0 || i + j == dim + 1))
                printf("* ");
            else if(i + j == dim + i)
                printf("-\n");
            else
                printf("- ");
    }
}

int main(){
    int dim;

    scanf("%d", &dim);
    cruz(dim);

    return 0;
}