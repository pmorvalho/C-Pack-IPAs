

#include <stdio.h>

#define DIVISOR 9
int main() {
    int c;
    long soma = 0;
    
    c = getchar();
    while (c != EOF && c != '\n')
    {
        soma += c -'0';
        c = getchar();
    }
    if ((soma % DIVISOR == 0))
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;   
}