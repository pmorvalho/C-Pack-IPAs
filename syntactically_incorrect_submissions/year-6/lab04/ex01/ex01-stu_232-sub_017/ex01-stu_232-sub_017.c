

#include <stdio.h>
#define VECMAX 100

int main(){
    int n, num;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        for (int j = 0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}