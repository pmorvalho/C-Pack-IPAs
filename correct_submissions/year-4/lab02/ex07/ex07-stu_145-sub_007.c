

#include <stdio.h>

int main() {
    int n, var, counter;
    var = 1;
    counter = 0;
    scanf("%d", &n);
    while(var <= n)
    {
        if(n%var==0)
            ++counter;
        ++var;
    }
    printf("%d\n", counter);   
    return 0;
}