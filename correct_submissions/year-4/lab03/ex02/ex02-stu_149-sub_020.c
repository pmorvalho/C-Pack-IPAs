

#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; i++) {
        
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        
        if (i==1) {
            printf("%d", i);
        } else{
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }}
        
        for (j = i - 1; j >= 1; j--) {
            if (j==1) {
                printf("%d",j);
            }else {
            printf("%d ", j);
            }
        }
        printf("\n");
    }
}


int main() {
    int H;
    scanf("%d", &H);
    piramide(H);
    return 0;
} 


