
#include <stdio.h>
int main (){
    int num1,num2;
    int contador=0;
    for(;contador<2;contador+=1){
        if (contador==0) 
            scanf( "%d",&num1);
        if (contador==1)
            scanf( "%d",&num2);
    }
    if ((num1%num2)==0) 
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}