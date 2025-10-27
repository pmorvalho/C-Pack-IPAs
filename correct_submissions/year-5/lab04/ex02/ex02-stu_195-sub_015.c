
#include <stdio.h>
#define VECMAX 100

int main() {
    int v[VECMAX], n, i, d, z;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &d);
        v[i] = d;
    }
    while (n)
    {
        for (i = 0; i < n; i++){
            if(v[i] == 0){
                z++;
            }
        }
        if (z == n){
            break;
        }
        z = 0;
        for (i = 0; i < n; i++){
            if (v[i] != 0){
                printf("*");
                v[i]--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}