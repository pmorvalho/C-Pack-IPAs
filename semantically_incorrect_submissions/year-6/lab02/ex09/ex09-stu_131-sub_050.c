
#include <stdio.h>
#define UNIT 60

int main(){

    int seg;

    scanf("%d",&seg);

    printf("%d:%2.2d:%2.2d\n",seg/(UNIT*UNIT),(seg/UNIT)%UNIT,seg%UNIT);

    return 0;
}