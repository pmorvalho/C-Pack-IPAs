
#include <stdio.h>
#define DIM 100
int main(void)
    {
    char palavra[DIM], palavra2[DIM];
    int cnt;
    cnt = scanf("'%[^']' %[^\n]", palavra, palavra2);
    printf("%d: %s\n%s\n", cnt, palavra, palavra2);
    cnt = scanf("%12s %30[^\n]", palavra, palavra2);
    printf("%d: %s\n%s\n", cnt, palavra, palavra2);
    return 0;
}