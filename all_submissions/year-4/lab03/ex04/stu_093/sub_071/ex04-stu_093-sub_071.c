

#include <stdio.h>

int main(){

    int num;

    if(scanf("%d", &num))
        printf("%d", num / 1);

    while(scanf("%d", &num) > 0){
        printf(" %d", num / 1);
    }
}