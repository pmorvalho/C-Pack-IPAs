

#include <stdio.h>

#define OUT 0
#define IN 1
#define SUM 10
#define SUBTRACT 11
#define ZERO_ASCII 48
#define NINE_ASCII 57
#define DIM 1000

int main() {

    int c, len, num = 0, soma = 0;
    int estado = OUT, estadoN = IN, estadoC = 0;
    int i = 0, j = 0;
    char tab[DIM][DIM];

    c = getchar();
    while (c != '\n' && c != EOF) {
        if (estado == OUT) {
            if (c >= ZERO_ASCII && c <= NINE_ASCII) {
                estado = IN;
                tab[i][j++] = c;
            }
            else if (c == '+' || c == '-') {
                tab[i][j++] = c;
                tab[i++][j] = '\0';
                j = 0;
            }
        }
        else if (estado == IN) {
            if (c == ' ') {
                estado = OUT;
                j++;
                tab[i++][j] = '\0';
                j = 0;
            }
            else
                tab[i][j++] = c;
        }
        c = getchar();
    }
    tab[i][j] = '\0';
    len = i;

    for (i = 0; i <= len; i++) {
        for (j = 0; tab[i][j] != '\0'; j++) {
            if (tab[i][j] >= ZERO_ASCII && tab[i][j] <= NINE_ASCII)
                estadoN = IN;
            else if (tab[i][0] == '+') {
                estadoC = SUM;
                estadoN = OUT;
            }
            else if (tab[i][0] == '-') {
                estadoC = SUBTRACT;
                estadoN = OUT;
            }
            if (estadoN == IN)
                num = num*10 + tab[i][j] - '0';
        }
        if (i == 0) {
            soma = num;
            num = 0;
        }
        if (estadoC == SUM) {
            soma += num;
            num = 0;
        }
        else if (estadoC == SUBTRACT) {
            soma -= num;
            num = 0;
        } 
    }

    printf("%d\n", soma);

    return 0;
}     