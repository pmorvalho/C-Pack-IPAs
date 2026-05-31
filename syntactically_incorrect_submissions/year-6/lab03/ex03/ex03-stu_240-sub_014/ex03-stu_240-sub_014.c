
#include <stdio.h>

void cruz(int N){
    int contini = 0;
    int contfim = N-1;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (j == contini || j == contfim)
                printf("* ");
            else
                printf("- ");
        }
        contini++;
        contfim--;
        printf("\n");
    }
}

int main(){
    int num;
    scanf("%d", &num);

    cruz(num);

    return 0;
}