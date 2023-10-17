#include <stdio.h>

int main(){
    int x, y, z, maior;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y && x > z)
        maior = x;
    else if(y > x && y > z)
        maior = y;
    else
        maior = z;
    printf("%d", maior);
    return 0;
}