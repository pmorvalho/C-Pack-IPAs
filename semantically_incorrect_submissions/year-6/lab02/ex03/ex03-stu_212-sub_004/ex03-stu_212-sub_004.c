

#include <stdio.h>
int main () {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n2 != 0 && n1 % n2 == 0)  {
        printf("yes");
    }
    else printf("no");
    return 0;
}