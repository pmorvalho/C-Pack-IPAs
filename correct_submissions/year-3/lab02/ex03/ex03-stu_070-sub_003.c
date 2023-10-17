
#include <stdio.h>

int main ()
{
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a % b == 0){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}