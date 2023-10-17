
#include <stdio.h>
int main(){
    int n, m;
    float resto;
    scanf("%d,%d", &n, &m);
    resto = n % m;
    if (resto == 0.0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}