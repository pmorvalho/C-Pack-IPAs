
#include <stdio.h>
int main(){
    int div = 1, n, cont = 1;
    scanf("%d", &n);
    while (n>div++){
        if (n % div==0)
            cont++;
    }
    printf("%d\n",cont);
    return 0;
}