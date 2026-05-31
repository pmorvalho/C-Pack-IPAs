
#include <stdio.h>

int main(){
    int n, i, v[100], m, j = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(v[i] > j){
            j= v[i];
        }
    }
        
        for(i = 1; i <= j; i++){
            for(m = 0; m < n; m++){
                putchar(v[m] >= i ? '*' : ' ');
            }
            putchar('\n');
        }
    return 0;
}