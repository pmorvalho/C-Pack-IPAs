
#include <stdio.h>

int main () {
    int con = 1, N, ex = 1;
    scanf("%d", &N);
    while(N > ex){
        if (N % ex == 0){
            con ++;
            ex ++;
        }
        else
        ex++;
    }
    printf("%d\n",con);
    return 0;
}