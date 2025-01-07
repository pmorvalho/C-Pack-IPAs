
#include <stdio.h>
int biggest(int a, int b, int c) {
    int biggest = a;

    if (b > biggest)
        biggest = b;
    if (c > biggest)
        biggest = c;

    return biggest;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", biggest(a, b, c));
    return 0;
}