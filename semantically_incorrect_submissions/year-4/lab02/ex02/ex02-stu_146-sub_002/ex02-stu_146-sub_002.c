

#include <stdio.h>

int main() {

    int m, n;

    printf("Introduza dois números inteiros: ");
    scanf("%d%d",&m,&n);


    printf("%d\n", m > n ? n : m); 
    printf("%d\n", m < n ? n : n);

    return 0;
}