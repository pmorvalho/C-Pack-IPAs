
#include <stdio.h>

int main (){
    int num1,num02;
    int contador=0;
    for(;contador<2;contador+=1){
        if (contador==0) 
            scanf( "%d",&num1);
        if (contador==1)
            scanf( "%d",&num02);
    }
    if (num1>num02)
        printf("%d\n%d\n",num02,num1);
    else    
        printf("%d\n%d\n",num1,num02);
    return 0;
}