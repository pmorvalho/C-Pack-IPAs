
#include <stdio.h>
int main() {
    #define VECMAX 100
    int N,i=0,j;
    int c[VECMAX];
    scanf("%d",&N);
    if (N<VECMAX) {
        while (i<N) {
            scanf("%d",&c[i]);
            if (c[i]!= ' '&& c[i]!=EOF && c[i]!='\n') {
                for (j=0;j<c[i];j++) {
                    printf("*");
                }
                i++;
            }
            printf("\n");
        }
    return 0;
    }
}
