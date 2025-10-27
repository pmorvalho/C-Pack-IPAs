

#include <stdio.h>

void quadrado(int N) {
   int e, c;
   for (e=0; e<N;e++) {
    for (c=0; c<N; c++) {
        if (c!=0)
            putchar ('\t');
        printf("%d", l + c + 1);
    }
    putchar('\n');
   }
}

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

