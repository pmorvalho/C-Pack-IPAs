

#include <stdio.h>

void quadrado(int N) {
    int num, j;

    for (int i = 0; i < N; i++) {
        j = i;

        while (j < (N + i)) {
            num = j + 1;
            printf("%d", num);
            j++;

            if (j < (N + i))
                printf("\t");
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 2)
        quadrado(N);

    return 0;
}
