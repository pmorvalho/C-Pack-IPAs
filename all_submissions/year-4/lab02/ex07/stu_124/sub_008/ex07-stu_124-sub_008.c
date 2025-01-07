
#include <stdio.h>

int main(){
    unsigned int N, cont;
    cont = 0;
    scanf("%u", &N);
    for (unsigned int i = 1; i <= N; i++){
        if (N % i == 0){
            cont++;
        }
    }
    printf("%u\n", cont);
    return 0;
}
