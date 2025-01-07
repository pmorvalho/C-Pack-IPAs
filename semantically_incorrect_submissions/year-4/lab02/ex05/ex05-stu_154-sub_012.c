
#include <stdio.h>
int main(){
    int num1, passo, i;
    passo = 1;
    i = passo;
    scanf("%d", &num1);
    while(i < num1) {
        i+= passo;
        printf("%d",i);
    }

    
    return 0;
}