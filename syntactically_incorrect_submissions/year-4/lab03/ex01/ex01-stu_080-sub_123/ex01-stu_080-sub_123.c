
#include <stdio.h>

void quadrado(int n){
    for (int i = 0; i < n; i++){
        for(int j = i; j < n + i; j++){
            printf("%d", j + 1);
            if (j < i + n - 1)
                putchar('\t');
        }
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if (n >= 2){
        quadrado(n);
    }
    return 0;
}