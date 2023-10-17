
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, j, k, i;
    char c, nums[VECMAX];
    
    scanf("%d", &n);
    while(n > VECMAX)
        scanf("%d", &n);

    c = getchar();
    for(i = 0; i <= n  && c != EOF; i++){
        if (c >= '0' && c <= '9')
            nums[i] = c;
        c = getchar();
    }
    for(j = 0; j <= i; j++){
        for(k = 0; k <= j; k++){
            printf("*");
        }
        if (j == i)
            continue;
        printf("\n");
    }
    return 0;
}