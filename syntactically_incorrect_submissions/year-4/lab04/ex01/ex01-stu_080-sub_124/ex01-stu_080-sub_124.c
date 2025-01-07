
#include <stdio.h>
#define VECMAX 100

int main(){
    int n;
    int num[VECMAX];
    scanf("%d", &n);
    if (n > VECMAX){
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);

        for(int j = 0; j < num[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}