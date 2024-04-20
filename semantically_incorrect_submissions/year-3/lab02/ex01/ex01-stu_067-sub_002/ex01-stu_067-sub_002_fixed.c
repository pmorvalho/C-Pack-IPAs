
#include<stdio.h>

int main(){
    int v1, v2, v3, maximo;
    scanf("%d%d%d", &v1, &v2, &v3);
    maximo=v1;
    if(v1<v2 && v3<v2)
    maximo = v2;

    if(v1>v2 && v3>v2)
    maximo = v1;

    if(v1<v2 && v3>v2)
    maximo = v3;

    printf("%d\n", maximo);
    return 0;
}
