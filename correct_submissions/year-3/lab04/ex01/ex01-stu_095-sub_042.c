

#include <stdio.h>
#define VECMAX 100

void grafico(int v){
    int i;
    for(i=0; i<v; i++){
        putchar('*');
    }
}

int main(){
    int n, i, v;
    scanf("%d", &n);
    if (n<VECMAX){
        for(i=0; i<n; i++){
            scanf("%d", &v);
            grafico(v);
            putchar('\n');
        }
    }
    return 0;
}