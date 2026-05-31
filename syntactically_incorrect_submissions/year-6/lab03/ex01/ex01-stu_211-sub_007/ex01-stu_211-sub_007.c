
#include <stdio.h>

void quadrado(int N) {
    int i=1,j,v;
    for (i<=N;i++) {
        v=i
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
    quandrado(N);
    return 0;
}