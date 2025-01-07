
#include <stdio.h>

void quadrado(int n){
    int aux;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            aux++;
            printf("%d", aux);
            if (j < i + n - 1)
                putchar('\t');
        }
        aux = i + 1;
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if (n < 2) {
        return 1;
    }

    quadrado(n);

    return 0;
}