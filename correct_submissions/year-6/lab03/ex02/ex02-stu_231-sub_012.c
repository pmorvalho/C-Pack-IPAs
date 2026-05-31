
#include <stdio.h>

void piramide(int n){
    int i, j;
    for(i = 0; i < n ; i++){
        for(j = 1; j < n - i; j++){
            printf("  ");
        }
        for(j = 1; j <= i + 1; j++){
            if(j > 1)
                printf(" ");
            printf("%d", j);
        }
        for(j = i; j > 0; j--){
            printf(" %d", j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}