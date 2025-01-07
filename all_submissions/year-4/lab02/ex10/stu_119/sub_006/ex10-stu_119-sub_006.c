
#include <stdio.h>

int main() {
    int num,dig,total,numdig;
    scanf("%d",&num);
    numdig=0;
    total=0;

    while (num>0)
    {
        numdig++;
        dig=dig+num%10;
        num= num/10;
        total= total + dig;
        dig=0;
    }

    printf("%d\n%d\n",numdig,total);
    return 0;
}
