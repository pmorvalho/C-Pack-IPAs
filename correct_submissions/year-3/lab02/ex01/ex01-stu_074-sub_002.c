

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    
    if (b<c)b=c;
    if ( a<b) a=b;

    printf("%d\n",a);
    
    return 0;
}