
#include <stdio.h>

int main() {
    int n1, n2, div;
    scanf("%d %d",&n1,&n2);

    div = n1 / n2;
    n1 -= (n2*div);

    if (n1 == 0)
        printf("yes");
    else
        printf("no"); 

 return 0;
}