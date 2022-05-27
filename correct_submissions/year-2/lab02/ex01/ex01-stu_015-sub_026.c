#include <stdio.h>

int x, y, z;

int main(){

    scanf("%d%d%d", &x, &y, &z);
    
    if (x>y && x>z)
        printf("%d\n", x);
    
    else if (y>x && y>z)
        printf("%d\n", y);
    
    else 
        printf("%d\n", z);

    return 0;
}
