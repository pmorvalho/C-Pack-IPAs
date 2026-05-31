
#include <stdio.h>

int numerar(int n, int tab[]){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(tab[j] > tab[j + 1]){
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int n, i, tab[3];
    int maior, menor, meio;
    for(i = 0; i < 3; i++){
        scanf("%d", &n);
        tab[i] = n;
    }
    numerar(3, tab);
    maior = tab[2];
    menor = tab[0];
    meio = tab[1];
    printf("%d %d %d\n", menor, meio, maior);
    return  0;
}