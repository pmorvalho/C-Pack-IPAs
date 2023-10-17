

#include <stdio.h>

#define DIM 100

void piramide(int N);

int main() {

    int N;

    scanf("%d", &N);
    piramide(N);

    return 0;
}

void piramide(int N) {

    char s[DIM][DIM];
    int line, column, i;

    for (i = N; i >= 1; i--) {
        for (line = 1; line <= N; line++) {
            for (column = 1; column < DIM ; column++) {
                if (column == 2*N + 2*line - 2)
                    s[line-1][column-1] = '\n';
                else if (column == 2*N + 2*line - 1) {
                    s[line-1][column-1] = '\0';
                    break;
                }
                else if (column % 2 != 0 && N*2 - 2*line <= column) {
                    if (column == 2*N - 1 - 2*(line - i) || column == 2*N - 1 + 2*(line - i))
                    s[line-1][column-1] = i + '0';
                    }
                else
                    s[line-1][column-1] = ' ';
            }
        }
    }

    for (line = 0; line < N; line++)
        printf("%s", s[line]);
}