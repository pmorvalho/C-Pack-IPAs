

#include <stdio.h>

int main(){

    int num;

    if(scanf("%d", &num) > 0){
        printf("%d", num / 1);
    } else {
        printf("\n");
        return 0;
    }

    while(scanf("%d", &num) > 0){
        printf(" %d", num / 1);
    }

    printf("\n");
    return 0;
}