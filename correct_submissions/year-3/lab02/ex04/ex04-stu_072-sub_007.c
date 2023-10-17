

#include <stdio.h>

int main(){

    int int1, int2, int3;

    scanf("%d %d %d", &int1, &int2, &int3);

    if (int1 > int2 && int2 > int3){
        printf("%d %d %d\n", int3, int2, int1);
    }
    if (int1 > int3 && int3 > int2){
        printf("%d %d %d\n", int2, int3, int1);
    }
    if (int2 > int1 && int1 > int3){
        printf("%d %d %d\n", int3, int1, int2);
    }
    if (int2 > int3 && int3 > int1){
        printf("%d %d %d\n", int1, int3, int2);
    }
    if (int3 > int1 && int1 > int2){
        printf("%d %d %d\n", int2, int1, int3);
    }
    if (int3 > int2 && int2 > int1){
        printf("%d %d %d\n", int1, int2, int3);
    }
    return 0;
}