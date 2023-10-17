
#include <stdio.h>
int main(){
    int v7, v2, v, aux;
    scanf("%d%d%d",&v7,&v2,&v);
    if(v7>v2){
        aux=v7;
        v7=v2;
        v2=aux;
    }
    

    if(v<v2 && v>v7)
    printf("%d %d %d\n",v7,v,v2);
    else if(v<v7 && v<v2)
    printf("%d %d %d\n",v, v7, v2);
    else if(v>v7 && v>v2)
    printf("%d %d %d\n",v7,v2,v);

    return 0;
}