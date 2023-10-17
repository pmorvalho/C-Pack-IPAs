
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, valores[100], max = 0, i, j;
    scanf("%d", &n);
    while(n >= VECMAX){
        scanf("%d", &n);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &valores[i]);
        if(valores[i] > max){
            max = valores[i];
        }
    }
    for(i = 0; i < max; i++){
        for(j = 0; j < n; j++){
            if (valores[j] > i){
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