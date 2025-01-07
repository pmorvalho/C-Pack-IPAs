
#include <stdio.h>

int main()
{
    int n1, n2, n3, n;
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if (n1 > n2) {
        n = n1; 
        n1 = n2; 
        n2 = n;
    }

    if (n3 < n1)
        printf("%d %d %d\n", n3, n1, n2);
    else if (n3 < n2)
        printf("%d %d %d\n", n1, n3, n2);
    else
        printf("%d %d %d\n", n1, n2, n3);

    return 0;
}