

#include <stdio.h>

void quadrado(int N) {
    int i, j = 0;
    while(j < N) {
        i = 1;
        while(i <= N) {
            if(i==N)
                printf("%d", i+j);
            else
                printf("%d\t", i+j);
            ++i;
        }
        printf("\n");
        ++j;
    }        
}


int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
