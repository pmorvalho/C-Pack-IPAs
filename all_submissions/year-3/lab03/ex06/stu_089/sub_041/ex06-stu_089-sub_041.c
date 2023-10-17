

#include <stdio.h>

#define MAX 1000000

int main() {
    int c;
    int soma = 0;
    int i = 0;

    while ((c = getchar()) != '\n' && i <= 100){
        soma += c;
        i++;
    }
    if(soma%9 == 0)
        printf("yes\n");
    else 
        printf("no\n");

    return 0;
}