
#include <stdio.h>
int main() {
    int N, num=0, soma=0;
    scanf("%d",&N);
    while (N>0) {
        num++;
        soma= soma+N%10;
        N=N/10;
    }
    printf("%d\n%d\n",num,soma);
    return 0;
}
     

  