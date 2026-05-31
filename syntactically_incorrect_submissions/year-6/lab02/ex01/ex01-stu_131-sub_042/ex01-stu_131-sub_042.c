
#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("introduza o primeiro numero");
    scanf("%d",&n1);
    printf("introduza o segundo numero");
    scanf("%d",&n2);
    printf("introduza o terceiro numero");
    scanf("%d",&n3);
    
    if (n1>n2) {
        if (n1>n3) {
            printf(n1);
        } else {
            printf(n3);
        }
    } else {
        if (n2>n3) {
            printf(n2);
        } else {
            printf(n3);
        }
    }
}