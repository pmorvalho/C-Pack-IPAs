

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int num=N/2, divisores=1;
    while (num!=0){
        if (N%num==0){
            divisores++;
        }
        num--;
    }

    printf("%d\n", divisores);
    return 0;
}