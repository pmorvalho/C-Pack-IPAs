

#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, max = 0;
    int valores[VECMAX];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &valores[i]);
        if (valores[i] > max){
            max = valores[i];
        }
    }

    for (i = max; i > 0; i--){
        for (j = 0; j < n; j++){
            if (valores[j] >= i){
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}