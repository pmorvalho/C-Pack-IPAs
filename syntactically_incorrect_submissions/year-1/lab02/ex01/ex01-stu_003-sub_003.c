#include <stdio.h>

int main()
{
    int c;
    scanf("%d",&c);
    int div = 0;
    int i = 1;
    while (i <= c){
        if (c % i == 0){
            ++div;
        }
        ++i;
    }
    printf("%d",div);
    return 0;
}