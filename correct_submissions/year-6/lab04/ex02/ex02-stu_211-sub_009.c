
#include <stdio.h>
int main() {
    #define VECMAX 100
    int N=0,i,j,v=0,max=0;
    int c[VECMAX];
    scanf("%d",&N);
    if (N<VECMAX) {
        for (i=0;i<N;i++) {
            scanf("%d",&c[i]);
            if (c[i]>max) {
                max=c[i];
            }
        }
        for (j=0;j<max;j++) {
            while (v<N) {
                if (c[v]!= ' '&& c[v]!=EOF && c[v]!='\n') {
                    if (c[v]>j) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                    v++;
                }
            }
            printf("\n");
            v=0;
        }
    }
    return 0;
}