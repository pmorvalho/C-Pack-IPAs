
#include <stdio.h>

int main(){
    int n, tmp;

    scanf("%d", &n);
    while(n-- > 0){
        scanf("%d", &tmp);
        while(tmp-- > 1)
            printf("*");
        printf("*\n");
    }
}