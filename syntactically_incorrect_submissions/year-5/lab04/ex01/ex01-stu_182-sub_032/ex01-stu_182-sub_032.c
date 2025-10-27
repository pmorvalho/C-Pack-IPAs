
#include <stdio.h>

#define VECMAX 100

int main(){
    int n,i,j;

    scanf("%d", &n);

    while(n >= VECMAX){
        scanf("%d", &n);
    }
    int vec[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < vec[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}