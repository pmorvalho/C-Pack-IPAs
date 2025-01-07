
#include <stdio.h>

void cruz(int N){
    int lin, col;
    for (lin = 1; lin <= N; lin++){
        for (col = 1; col <= N; col++)
            printf("%s", ((col == lin) || ((col + lin) == (N + 1))) ? "*" : "-");
            if (col <  N)
                putchar(' ');
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}