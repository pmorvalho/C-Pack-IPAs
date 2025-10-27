

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (a>b)
        printf("%d\n%d\n", b, a);
    else if (b>a)
        printf("%d\n%d\n", a, b);
    else
        printf("Os dois números são iguais.\n");
    return 0;
}