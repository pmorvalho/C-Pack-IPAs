
#include <stdio.h>

void line(int l, int n) {
    int j;
    for(j = l; j < n; j++) {
        printf("  ");
    }
    for(j = 1; j <= l; j++) {
        if(j == 1 && l == 1){
            printf("%d", j);
        }else{
            printf("%d ", j);
        }
    }
    for(j = l - 1; j >= 1; j--) {
        if(j== 1){
            printf("%d", j);
        }else{
        printf("%d ", j);
        } 
    }
    printf("\n");
}

int main() {
    int n, l;
    scanf("%d", &n);
    for(l = 1; l <= n; l++) {
        line(l, n);
    }
    return 0;
}