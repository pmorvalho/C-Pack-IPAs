
#include <stdio.h>

void piramide(int n){
    int i, j, s;
    for(i = 1; i <= n; i++){
        for(s = 0; s < n - i; s++){
            printf("  ");
        }
        for(j = 1; j <= i ; j++){
            printf("%d ", j);
        }
        for(j = i - 1; j >=1 ; j--){
            printf("%d ", j);
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