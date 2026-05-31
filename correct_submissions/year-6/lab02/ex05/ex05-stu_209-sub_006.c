

#include <stdio.h>

int main(){
    int a,contador;
    scanf("%d",&a);
    contador=1;
    while(contador<=a){
        printf("%d\n",contador);
        ++contador;
    }

    return 0;
}