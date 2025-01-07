
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n >= 2){
    for(int i = 1;i<= n;i++)
    
        printf("%d\t%d\t%d\t%d\t%d\n",i,i+1,i+2,i+3,i+4);
    }
    return 0;
}