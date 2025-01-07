

#include <stdio.h>

void eh_divisor(int a, int b)
{
    if(a%b==0)
        printf("yes\n");
    else
        printf("no\n");  
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    eh_divisor(a, b);
    return 0;
}