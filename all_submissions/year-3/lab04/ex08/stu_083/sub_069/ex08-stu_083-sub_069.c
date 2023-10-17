
#include <stdio.h>
#include <string.h>
#define DIM 100
int main(){
    char num1[DIM], num2[DIM];
    int x,y,i,true;
    true=0;
    scanf("%s%s",num1, num2);
    x=strlen(num1);
    y=strlen(num2);
    if (x>y && num1[0]!='-')
    {
        printf("%s\n",num1);
        true=1;
    }
    else if(x>y && num1[0]=='-'){
        printf("%s\n",num2);
        true=1;
    }

    if (x<y && num1[0]!='-')
    {
        printf("%s\n",num1);
        true=1;
    }
    else if(x<y && num1[0]=='-'){
        printf("%s\n",num2);
        true=1;
    }

    for ( i = 0; i < x; i++)
    {
        if (num1[i]>num2[i])
        {
            printf("%s\n",num1);
            true=1;
            break;
        }
        else if (num1[i]<num2[i])
        {
            printf("%s\n",num2);
            true=1;   
            break;        
        }  
    }

    if (true==0)
    {
        printf("%s\n",num1);
    }
    return 0;
}