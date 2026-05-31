
#include <stdio.h>

int main(){
    int val, dig=0, sum=0;

    scanf("%d",&val);
    while(val!=0) {
        dig++;
        sum+=val%10;
        val/=10;
    }
    printf("%d\n%d\n",dig,sum);

    return 0;
}