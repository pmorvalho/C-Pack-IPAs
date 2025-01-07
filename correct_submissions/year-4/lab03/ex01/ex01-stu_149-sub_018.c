

#include <stdio.h>

void quadrado(int N) {
    int l,c;
    for(l=1;l<=N;l++) {
        printf("%d",l);
        for(c=1;c<N;c++) {
            putchar('\t');
            printf("%d",l+c); 
        }
        putchar('\n');
    }
}


int main() {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;

}

