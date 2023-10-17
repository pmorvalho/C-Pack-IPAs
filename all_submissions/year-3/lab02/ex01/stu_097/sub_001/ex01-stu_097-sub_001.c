
#include <stdio.h>

int main (){
    
    int v1, v2, v3, maximo;
    scanf("%d %d %d", &v1, &v2, &v3);

    if(v1>v2)
        maximo=v1;
    else
        maximo=v2;

    if(v3>maximo)
        maximo=v3;
    else
        maximo=maximo;
    
    printf("%d \n", maximo);
    return 0;
}