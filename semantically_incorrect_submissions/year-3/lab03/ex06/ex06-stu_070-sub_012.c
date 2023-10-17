
#include <stdio.h>

int main()
{
    char c;
    int soma;
    
    while (((c = getchar()) >= '0') && (c <= '9')){
        soma += c - 48;
    }
    if ((soma % 9) == 0)
        printf("yes");
    else 
        printf("no");
    return 0;
}