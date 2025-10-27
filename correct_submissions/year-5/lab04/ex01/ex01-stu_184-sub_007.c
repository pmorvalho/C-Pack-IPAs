
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, m;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        while(m--)printf("*");
        printf("\n");
    }
    return 0;
}