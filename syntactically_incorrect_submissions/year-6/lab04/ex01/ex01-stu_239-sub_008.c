

#include <stdio.h>

#define VECMAX 100

int main(){
    int n, num;
    int i = 0;

    scanf("%d", &n);

    if (n > VECMAX) n = VECMAX;

    while (i < n){
        scanf("%d", &num);
        for (int j=0; j < num; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }

    return 0;
}