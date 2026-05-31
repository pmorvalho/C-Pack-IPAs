
#include <stdio.h>
int main () {
    int i=1, N, num=0;
    scanf("%d",&N);
    while (i<=N) {
        if (N%i==0) {
            num++;
        }
        i++;
    }
    printf("%d\n",num);
    return 0;
}



   