
#include <stdio.h>

void piramide (int N) {
    int spaces = N + (N-2), aux = 1;

    if (N >= 2) {
        for(int line = 1; line < N + 1; line++){

            for (int j = 0; j < spaces;j++) {

                printf(" ");  

            }

            spaces -= 2;
            printf("%d ", aux);
            aux++;
            
            if (aux != line + 1) {

                while (aux<line) {

                    printf("%d ", aux);
                    aux++;

                }

                while (aux!=0) {

                    printf("%d ", aux);
                    aux--;

                }
            }
            printf("\n");
            aux = 1;
        }
    }
}

int main () {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}

