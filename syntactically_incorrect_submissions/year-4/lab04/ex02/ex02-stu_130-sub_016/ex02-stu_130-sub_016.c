

#include <stdio.h>

#define VECMAX 100

int main (){
    int n = 0, vec[VECMAX], maior = 0;

    while ( n <= 0 || n > VECMAX){
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        if (vec[i] > maior) maior = vec[i];
    }


    for(int u = 0; u < maior; u++)
    {
        for( int i = 0; i < n; i++){
        if (vec[i]-- > 0) {
            printf("*");
            } else printf(" ");
        if (i == n - 1){
            printf("\n");
        }
        }
    }
}