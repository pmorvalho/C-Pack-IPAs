

#include <stdio.h>

int main () {

    int v1, v2, v3;
    int maior;

    scanf("%d %d %d", &v1, &v2, &v3);

    maior = v1 > v2 ? v1 : v2;
    
    maior = maior > v3 ? maior : v3;

    printf("%d\n", maior);
    return 0;
}