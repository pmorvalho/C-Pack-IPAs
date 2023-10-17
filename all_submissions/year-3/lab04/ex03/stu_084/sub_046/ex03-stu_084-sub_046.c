
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, valores[VECMAX], i, j, max = 0;

    scanf("%d", &n);
    while(n > VECMAX){
        scanf("%d", &n);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &valores[i]);
        if(valores[i] > max){
            max = valores[i];
        }
    }
    for(i = max-1; i >= 0; i--){
        for (j = 0; j < n; j++){
            if(valores[j] > i){
                putchar('*');
            }
            else{
                 putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}