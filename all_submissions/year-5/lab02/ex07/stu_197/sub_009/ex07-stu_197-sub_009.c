
#include <stdio.h>

int main(){
    int num, i, acc=0;
    scanf("%d",&num);
    for(i=num;i>0;i--){
        if(num%i==0){
            acc+=1;
        }
    }
    printf("%d\n",acc);
    return 0;
}