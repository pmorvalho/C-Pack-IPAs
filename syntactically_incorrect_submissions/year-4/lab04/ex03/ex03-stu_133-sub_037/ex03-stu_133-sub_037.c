
#include <stdio.h>

#define VECMAX 100

int leLinhaEPegaMaiorValor(int n, int vec[]);
void mostraGrafico(int n, int vec[], int maior);

int main() {
    int n = 0, maior = 0, vec[VECMAX];

    scanf("%d", &n);
    while (n <= 0 && n >= VECMAX) {
        scanf("%d", &n);
    }
    maior = leLinhaEPegaMaiorValor(n, vec);
    mostraGrafico(n, vec, maior);
    return 0;
}

int leLinhaEPegaMaiorValor(int n, int vec[]) {
    int i = 0, maior = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        if (vec[i] > maior) {
            maior = vec[i];
        }
    }
    return maior;
}

void mostraGrafico(int n, int vec[], int maior) {
    int i = 0, j = 0;
    char linha[n];
    linha[n] = '\0';

    for (i = 0; i < maior; i++) {
        for (j = 0; j < n; j++) {
            if (vec[j] >= maior - i) {
                linha[j] = '*';
            } else {
                linha[j] = ' ';
            }
        }
        printf("%s\n", linha);
    }
}