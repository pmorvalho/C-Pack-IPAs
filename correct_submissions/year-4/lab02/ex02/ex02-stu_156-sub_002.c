
#include <stdio.h>

int main(void){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

    if(n1 <= n2) {
        printf("%d\n%d\n",n1,n2);
    }
    else{
        printf("%d\n%d\n",n2,n1);
    }
    return 0;
}