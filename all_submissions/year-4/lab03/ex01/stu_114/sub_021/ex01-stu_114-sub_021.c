
#include <stdio.h>
int main() {

    int N, N_incial, Contador_Colunas = 1, Contador_Linha = 1;

    scanf("%d", &N);
    N_incial = N;

    while (Contador_Colunas <= N) {
        if (Contador_Colunas < N) {
            printf("%d\t", Contador_Colunas);
        }
        else {
            printf("%d\n", Contador_Colunas);
        }

        Contador_Colunas++;
        if (Contador_Colunas > N) {
            Contador_Linha += 1;
            if (Contador_Linha > N_incial) {
                return 0;
            }
            Contador_Colunas = Contador_Linha;
            N += 1;
        }
    }

    return 0;
}