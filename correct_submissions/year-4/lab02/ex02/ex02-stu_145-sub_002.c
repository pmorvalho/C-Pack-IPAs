

#include <stdio.h>

void ordena_dois(int a, int b)
{
    if (a > b)
        printf("%d\n%d\n", b, a);
    else
        printf("%d\n%d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    ordena_dois(a, b);
    return 0;
}