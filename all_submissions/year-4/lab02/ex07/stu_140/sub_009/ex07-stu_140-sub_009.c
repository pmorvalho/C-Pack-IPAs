
#include <stdio.h>
int main(){
    int num,counter=0,currentdiv=1;
    scanf("%d",&num);
    while(num>=currentdiv){
        if (num%currentdiv==0){
            counter++;
            currentdiv++;
        }
        else{
            currentdiv++;
        }
    }
    printf("%d\n",counter);
    return 0;
}