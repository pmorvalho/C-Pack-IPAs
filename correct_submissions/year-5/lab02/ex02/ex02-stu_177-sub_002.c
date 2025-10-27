
#include <stdio.h>

int main()
{
    int n, m, maior, menor;
    scanf("%d %d", &n, &m);
    if(n>m){
        maior = n;
        menor = m;
    }
    else{
        maior = m;
        menor = n;
    }
    printf("%d\n%d\n", menor, maior);
    return 0;
}