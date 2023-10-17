

#include <stdio.h>

#define DIM 100

void cruz(int N);

int main() {

    int N;

    scanf("%d", &N);
    cruz(N);

    return 0;
}

void cruz(int N) {

int line, column;
char tab[DIM][DIM];

for (line = 0; line < N; line++) {
    for (column = 0; column <= N*2; column ++) {
        if (column == N*2 - 1)
            tab[line][column] = '\n';
        else if (column == N*2)
            tab[line][column] = '\0';
        else if (column % 2 == 0) {
            if (column == 2*line)
                tab[line][column] = '*';
            else if (column/2 + line == N - 1)
                tab[line][column] = '*';
            else
                tab[line][column] = '-';
        }
        else
            tab[line][column] = ' ';    
        }
    }

    for (line = 0; line < N; line++)
        printf("%s", tab[line]);
}