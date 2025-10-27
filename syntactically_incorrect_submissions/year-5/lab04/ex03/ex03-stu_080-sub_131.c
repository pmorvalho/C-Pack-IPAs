
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, max = 0;
    scanf("%d", &n);
    if(n >= VECMAX) return 1;
    int num[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        max = num[i] >= max ? num[i] : max;
    }

    for (int i = max - 1; i >= 0; i--){
        for (int j = 0; j < n; j++){
            if (num[j] > i) printf("*");
            else printf(" ");
            
        }
        printf("\n");
    }

    return 0;
}