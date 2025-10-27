
#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    if (n1 < n2)
        printf("%d",n2);
    else if (n2 < n1)
        printf("%d",n1);
    else
        printf("sao iguais");
return 0;
}