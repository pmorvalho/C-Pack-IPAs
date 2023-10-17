

#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, valor;
    char tab[VECMAX][VECMAX];
    scanf("%d\n", &n);

    for(i=0; i<n; i++){
        scanf("%d", &valor);
        for(j=0; j<valor; j++)
            tab[i][j] = '*';
    }

    tab[i][j] = '\0';
    for(i=0; i<n; i++)
        printf("%s\n", tab[i]);
    return 0;
}