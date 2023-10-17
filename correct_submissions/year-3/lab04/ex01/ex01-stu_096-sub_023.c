
#include<stdio.h>
#define VECMAX 100
int main() {
    int n, i, p, vec[VECMAX];
    scanf("%d", &n);
    while (n <= 0){
        scanf("%d", &n);
    }
    if (n < VECMAX){
        for (i = 0; i < n; i++){
            scanf("%d", &vec[i]);
        }
        for (i = 0; i < n; i++){
            for (p = 0; p < vec[i]; p++){
                putchar('*');
            }
            printf("\n");
        }
    }
    return 0;
}