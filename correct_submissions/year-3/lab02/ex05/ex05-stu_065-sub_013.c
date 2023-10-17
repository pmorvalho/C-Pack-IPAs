
#include <stdio.h>

int main(){
    int num, cont = 1;
    scanf("%d", &num);
    while (cont <= num)
    {
        printf("%d\n", cont);
        cont++;
    }
    return 0;
}