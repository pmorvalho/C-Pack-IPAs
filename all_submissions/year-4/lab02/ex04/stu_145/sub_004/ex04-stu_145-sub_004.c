

#include <stdio.h>

void ordena_tres(int a, int b, int c)
{
    if (a >= b){
        if (b >= c)
            printf("%d %d %d\n", c, b, a);
        else if (c >= a)
            printf("%d %d %d\n", b, a, c);
        else
            printf("%d %d %d\n", b, c, a);
    }
    else {
        if (a >= c)
            printf("%d %d %d\n", c, a, b);
        else if (c >= b)
            printf("%d %d %d\n", a, b, c);
        else
            printf("%d %d %d\n", a, c, b);
    }
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    ordena_tres(a, b, c);
    return 0;
}