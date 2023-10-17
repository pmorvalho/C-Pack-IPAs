
#include <stdio.h>
int main (){
    int num1,num2,num3;
    int contador;
    for(contador=0;contador<3;contador+=1){
        if (contador==0) 
            scanf( "%d",&num1);
        if (contador==1)
            scanf( "%d",&num2);
        if (contador==2)
            scanf( "%d",&num3);
    }
    if ((num1>=num2) && (num1>=num3)) 
        printf("n%d\n",num1);
    else if ((num2>=num1) && (num2>=num3)) 
        printf("n%d\n",num2);
    else if ((num3>=num2) && (num3>=num1)) 
        printf("n%d\n",num3); 
    return 0;
}