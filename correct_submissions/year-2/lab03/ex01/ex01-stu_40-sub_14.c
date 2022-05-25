#include <stdio.h>

void quadrado(int);

int main() {
    int n;

    scanf("%d", &n);
    quadrado(n);

    return 0;
}


void quadrado(int n) {
    int l, c;
    for(l=0; l<n; l++) {
        for(c=0; c<n; c++) {
            if(c>0)
                putchar('\t');
            printf("%d", l+c+1);
        }
    putchar('\n');
    }

}