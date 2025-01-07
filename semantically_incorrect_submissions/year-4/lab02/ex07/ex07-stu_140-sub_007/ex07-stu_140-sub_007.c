
#include <stdio.h>
int main(){
    int num,counter=1,currentdiv=2;
    scanf("%d",&num);
    while(num!=1){
        if (num%currentdiv==0){
            num=num/currentdiv;
            counter++;
        }
        else{
            currentdiv++;
        }
    }
    printf("%d\n",counter);
    return 0;
}