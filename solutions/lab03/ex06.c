
#include <stdio.h>
#include <assert.h>

int main() {
    int acumulado = 0;
    int c;

    while ((c = getchar()) != EOF){
        acumulado = acumulado + (c - '0');
    }
    
    if (acumulado % 9 == 0)
        puts("yes");
    else
        puts("no");
    
    return 0;
}
