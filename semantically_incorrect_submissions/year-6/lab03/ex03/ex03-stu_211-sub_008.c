
#include <stdio.h>
void cruz(int N) {
    int i,j,c=1,v=N;
    for (i=1;i<=N;i++) {
        for (j=1;j<=N;j++){
            if (j==c || j==v) {
                printf("*");
                printf("%*s",1," ");
            }
            else {
                printf("-");
                printf("%*s",1," ");
            }
        }
        printf("\n");
        c++;
        v--;
    }
}

int main () {
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}


