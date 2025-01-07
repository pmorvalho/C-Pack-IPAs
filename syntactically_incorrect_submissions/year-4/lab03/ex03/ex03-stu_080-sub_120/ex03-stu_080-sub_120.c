
#include <stdio.h>

void cruz(int n){
    int aux = n - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (j == i || j == aux)
                printf("* ");
            else
                printf("- ");
        }
        aux--;

        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}