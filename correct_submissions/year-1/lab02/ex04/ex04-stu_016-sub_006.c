#include <stdio.h>

int main(){
    int x, y, z, temp, swaps = 99999;
    scanf("%d %d %d", &x, &y, &z);

    while(swaps > 0){
        swaps = 0;
        if(x > y){
            temp = x;
            x = y;
            y = temp;
            swaps++;
        }
        if(y > z){
            temp = y;
            y = z;
            z = temp;
            swaps++;
        }
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}