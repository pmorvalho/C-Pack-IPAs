
#include <stdio.h>

void quadrado(int N) {
    int i,j,v;
    for (i=1;i<=N;i++) {
        v=i;
        for (j=0;j<N;j++) {
            printf("%d\t",v);
            v++;
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}

