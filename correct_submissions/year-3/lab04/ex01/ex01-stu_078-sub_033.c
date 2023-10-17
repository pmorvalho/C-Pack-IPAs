

#include <stdio.h>

#define VECMAX 100

void output(int v[], int size);
void readvalues(int v[], int size);

int main() {
    int n, tabela[VECMAX];
    scanf("%d", &n);
    readvalues(tabela, n);
    output(tabela, n);
    return 0;
}

void readvalues(int v[], int size) {
    int i;
    for (i = 0; i < size; i++) 
        scanf("%d", &v[i]);
}
void output(int v[], int size) {
    int i, j;
    for (i = 0; i < size; i++){
        for (j = 0; j < v[i]; j++) 
            putchar('*');
        putchar('\n');
    }   
}
