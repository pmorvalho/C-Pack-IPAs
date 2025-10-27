
#include <stdio.h>

#define DIM 3

int main(){
    int x, y, z, maior, meio, menor;
    scanf("%d %d %d", &x, &y, &z);
    if(x > y && x > z){
        maior = x;
        meio = y > z ? y : z;
        menor = y < z ? y : z;
    }
    else if(y > z){
        maior = y;
        meio = x > z ? x : z;
        menor = x < z ? x : z;
    }
    else{
        maior = z;
        meio = x > y ? x : y;
        menor = x < y ? x : y;
    }
    printf("%d %d %d\n", menor, meio, maior);
    return 0;
}