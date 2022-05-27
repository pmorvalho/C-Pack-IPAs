#include <stdio.h>

int x, y, z;

int main(){

    scanf("%d%d%d", &x, &y, &z);
    
    if (x > y & x > z)
        printf("%d", x);
    
    else if (y > x & y > z)
        printf("%d", y);
    
    else 
        printf("%d", z);

    return 0;
}