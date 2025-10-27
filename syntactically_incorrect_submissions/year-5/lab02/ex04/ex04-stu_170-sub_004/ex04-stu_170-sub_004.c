
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int x = (a>b ? b : a), y = (a>b ? a : b);
    int z;
    if (c>y){
        z = c;
    } else if (c>x){
        z = y;
        y = c;
    } else {
        z = y;
        y = x;
        x = c;
    }
    printf("%d %d %d\n", x, y, z);


    return 0;
}