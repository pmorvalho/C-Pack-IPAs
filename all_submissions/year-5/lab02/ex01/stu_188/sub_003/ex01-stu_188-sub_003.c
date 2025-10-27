
#include <stdio.h>

int main(){
    int maior,n1,n2,n3;
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n2>n1){
        maior=n2;
    }
    if (n3>n2){
        maior=n3;
    }       
    printf("%d\n",maior);
    return 0;
}

