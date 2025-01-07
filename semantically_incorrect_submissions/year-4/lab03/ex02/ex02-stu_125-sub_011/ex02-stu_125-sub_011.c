
#include <stdio.h>

void piramide(int N) {
    int i, holder, row;
    
    for (row = 1; row <= N; row++) {
        for (i = 0; i < 2*(N-row); i++)
            printf(" ");

        for (holder = 1; holder <= row; holder++)
            printf("%d ", holder);

        for (holder -= 2; holder > 0; holder--){
            if (holder != 1)
                printf("%d ", holder);
            else
                printf("%d", holder);
            }

        printf("\n");
    }
}

int main() {
    int n = 0;

    while (n < 2) {
        scanf("%d", &n);
    }

    piramide(n);

    return 0;
}