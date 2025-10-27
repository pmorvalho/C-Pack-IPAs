
#include  <stdio.h>
#define VECMAX 100

int main(){
    int n, v[VECMAX], i, j, maior = 0;
    scanf("%d\n", &n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    for (j = maior; j >= 1; j--) {
        for(i = 0; i < n; ++i) {
            if(v[i] >= j){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}