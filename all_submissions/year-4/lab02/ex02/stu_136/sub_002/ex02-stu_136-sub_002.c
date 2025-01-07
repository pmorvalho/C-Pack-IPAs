

#include <stdio.h>

int main() {

    int a, b;

    scanf("%d%d",&a,&b);

    if (b > a)
        printf("%d\n%d\n",a,b);
    else
        printf("%d\n%d\n",b,a);

    return 0;
}
