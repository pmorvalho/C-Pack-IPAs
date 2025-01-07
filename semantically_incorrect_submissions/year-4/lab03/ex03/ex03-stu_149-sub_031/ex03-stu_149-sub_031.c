
#include <stdio.h>

void cruz(int N) {
    int i,j;
    for (i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            if (i==j) {
                printf("* ");
            } 
            
                
                else if (i+j==N-1) {
                printf("* ");
            }else {
                printf("- ");
            } }
        putchar('\n');
    }
} 


int main() {
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}