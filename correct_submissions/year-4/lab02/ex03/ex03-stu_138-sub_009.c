
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > a){
        if (b%a == 0)
            printf("yes\n");
        else
            printf("no\n");
        return 0;}
    else
        {
        if (a%b == 0)
            printf("yes\n");
        else
            printf("no\n");
        return 0;}

}