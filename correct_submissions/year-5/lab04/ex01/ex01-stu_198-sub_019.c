
#include  <stdio.h>
#define VECMAX 100

int main(){
    int n, v[VECMAX], i, j;
    scanf("%d\n", &n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
        for(j = 0; j < v[i]; ++j) {
            printf("*");

        }
        printf("\n");
    }
    return 0;

}