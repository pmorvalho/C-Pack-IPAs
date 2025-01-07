
#include <stdio.h>

#define VECMAX 100

int main(){
    int n = 0, i, temp;

    while(n <= 0 || n >= VECMAX){
        scanf("%d", &n);

    }

    while(n--){
        scanf("%d", &temp);
        for(i = 0; i < temp; i++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}