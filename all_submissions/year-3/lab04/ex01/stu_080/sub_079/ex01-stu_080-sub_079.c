
#include <stdio.h>
#define VECMAX 100
int main(){
    int i,j,n,v[VECMAX];
    scanf("%d", &n);
    for( i= 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0;i < n; i++){
        for(j = 0; j < v[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}