
#include <stdio.h>

#define VECMAX 100
#define SIM 1
#define NAO 0


void readInput(int n, int vec[]);
void showGraph(int n, int vec[]);

int main() {
    int n = 0, vec[VECMAX];

    scanf("%d", &n);
    while (n <= 0 && n >= VECMAX) {
        scanf("%d", &n);
    }
    readInput(n, vec);
    showGraph(n, vec);
    return 0;
}

void readInput(int n, int vec[]) {
    int i = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
}

void showGraph(int n, int vec[]) {
    int i = 0, j = 1, fazPrint = SIM;
    char linha[n+1];

    while (fazPrint) {
        fazPrint = NAO;
        for (i = 0; i < n; i++) {
            if (vec[i] >= j) {
                linha[i] = '*';
                fazPrint = SIM;
            } else {
                linha[i] = ' ';
            }
        }
        if (fazPrint) {
            printf("%s\n", linha);
            j++;
        }
    }
    
}