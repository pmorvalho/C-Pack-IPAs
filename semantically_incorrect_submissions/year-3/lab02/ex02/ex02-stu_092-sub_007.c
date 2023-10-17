
#include <stdio.h>



#define PASSO 1
#define INICIO 0
#define FIM 2

int main()
{
    int n, m;
    printf("Introduza três números inteiros:\n");
    scanf("%d%d", &n, &m);
    if (n > m)
        printf("%d\n%d\n", m, n);
    else
        printf("%d\n%d\n", n, m);
    return 0;
}
