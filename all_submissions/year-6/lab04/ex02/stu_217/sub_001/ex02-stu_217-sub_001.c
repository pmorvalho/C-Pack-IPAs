

#include <stdio.h>

int main(){
    int n, i, j, max;
    scanf("%d", &n);
    int tab[n];
    max = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &tab[i]);
        if(tab[i] > max){
            max = tab[i];
        }
    }
    
    for(i = 0; i <= max; i++){
        for(j = 0; j < n; j++){
            putchar(tab[j] > i ? '*' : ' ');
        }
        putchar('\n');
    }
    return 0;
}