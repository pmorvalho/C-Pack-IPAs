
#include <stdio.h>

int main(){
    int n;
    int c=0, sum=0;
    scanf("%d", &n);
    
    do
    {
        c++;
        sum+=n%10;
        n/=10;
    } while (n>0);
    
    printf("%d\n%d\n", c,sum);
    
    return 0;
}