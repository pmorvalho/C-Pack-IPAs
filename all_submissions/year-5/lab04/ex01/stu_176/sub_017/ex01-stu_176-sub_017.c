
#include <stdio.h>
#define VECMAX 100

int main()
{
    int n, i, k, vec[VECMAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    
    for (i = 0; i < n; i++){
        for (k = vec[i]; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}