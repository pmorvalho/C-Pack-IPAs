
#include <stdio.h>

int main(){
    int cont;
    long int N;
    scanf("%li", &N);
    cont = 0;
    while (N != 0){
        cont += N % 10;
        N = N/10;
    }
    if (cont % 9 == 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}